#include<stdio.h>
int main()
{
    long long n;
    scanf("%lld",&n);
    //long long step[n];
    long long c=0,i,a=-1,t,max=1;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&t);
        if(t>=a)
        {
            c++;
            a=t;
        }
        else
        {
            a=t;
            if(max<c)
                max=c;
            c=1;
        }
    }
    if(max<c)
        max=c;
    printf("%lld",max);
}

