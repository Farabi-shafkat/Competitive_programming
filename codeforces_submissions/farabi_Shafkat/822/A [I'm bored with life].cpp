#include<stdio.h>
long long min(long long a,long long b)
{
    if(a>b)
        return b;
    else
        return a;
}
int main()
{
    long long a,b;
    scanf("%lld %lld",&a,&b);
    long long l;
    l=min(a,b);
    long long i,fact=1;
    for(i=2;i<=l;i++)
        fact=fact*i;
    printf("%lld\n",fact);
    return 0;
}
