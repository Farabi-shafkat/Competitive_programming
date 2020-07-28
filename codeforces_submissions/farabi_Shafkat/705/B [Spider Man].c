#include<stdio.h>
#include<string.h>
int main()
{
    long long int t,sum=0,i,n,d;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        d=0;
        scanf("%lld",&t);
        t--;
        sum+=t;
       //printf("d>>%lld ",sum);
        if(sum%2)
            printf("1 ");
        else
            printf("2 ");

    }
    return 0;
}
