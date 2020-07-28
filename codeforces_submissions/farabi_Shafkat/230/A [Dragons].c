#include<stdio.h>
int main()
{
    long long int s,n;
    scanf("%lld %lld",&s,&n);
    long long i, pow[n],bon[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld %lld",&pow[i],&bon[i]);
    }
    long long j,minin,min,temp;
    for(i=0;i<n;i++)
    {
        min=pow[i];
        minin=i;
        for(j=i+1;j<n;j++)
        {
            if(pow[j]<min)
            {
                min=pow[j];
                minin=j;
            }

        }
        temp=pow[i];
        pow[i]=min;
        pow[minin]=temp;
        temp=bon[i];
        bon[i]=bon[minin];
        bon[minin]=temp;
    }
    /* for(i=0;i<n;i++)
    {
        printf("%lld %lld\n",pow[i],bon[i]);
    }*/
    for(i=0;i<n;i++)
    {
        if(pow[i]>=s)
        {
            printf("NO");
            return 0;
        }
        else
        {
            s+=bon[i];
        }
    }
    printf("YES");
    return 0;

}