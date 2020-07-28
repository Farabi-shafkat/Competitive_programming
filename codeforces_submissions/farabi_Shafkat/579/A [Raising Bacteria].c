#include<stdio.h>
int main()
{
    long long x,i,n,c=0;
    scanf("%lld",&x);
    for(i=0;x>0;i++)
    {
        n=x;
        if(n%2)
            c++;
        x=x>>1;

    }
    printf("%lld",c);
}
