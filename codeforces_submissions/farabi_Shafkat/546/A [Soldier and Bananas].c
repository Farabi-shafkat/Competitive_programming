#include<stdio.h>
int main()
{
    long long k,w,n,b;
    scanf("%lld %lld %lld",&k,&n,&w);
    b=k*w*(w+1)/2-n;
    if(b<0)
        b=0;
    printf("%lld",b);
}