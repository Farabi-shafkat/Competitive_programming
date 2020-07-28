#include<stdio.h>
int main()
{
    int n,i,j,min=90000000,minin,temp;
    scanf("%d",&n);
    int ghor[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ghor[i]);

    }
    for(i=0;i<n-1;i++)
    {
        min=ghor[i];
        minin=i;
       // printf("%d\n",min);
        for(j=i+1;j<n;j++)
        {
            if(ghor[j]<min)
               {
                min=ghor[j];
                minin=j;
               }
        }
       // printf("min%d minin%d\n",min,minin);
        if(ghor[i]>min)
        {
            temp=ghor[minin];
            ghor[minin]=ghor[i];
            ghor[i]=temp;

        }

    }
    for(i=0;i<n;i++)
    {
        printf("%d ",ghor[i]);

    }

}
