#include<stdio.h>
#include<string.h>
int main()
{
    long long int k2,k3,k5,k6,sum=0;
    scanf("%lld %lld %lld %lld",&k2,&k3,&k5,&k6);
    long long a256=0,a32=0;
    if(k2>k5)
    {
        if(k5>k6)
            a256=k6;
        else
            a256=k5;
    }
    else
    {
        if(k2>k6)
            a256=k6;
        else
            a256=k2;
    }
    sum+=a256*256;
    k2-=a256;
    k5-=a256;
    k6-=a256;
    if(k2>k3)
        a32=k3;
    else
        a32=k2;
    sum+=a32*32;
    printf("%lld",sum);
}
