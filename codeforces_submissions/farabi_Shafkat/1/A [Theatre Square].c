#include<stdio.h>
int main()
{
    long long int m,n,a,t,num,c,b;
    scanf("%lld %lld %lld",&m,&n,&a);
    t=a*a;
    long long int area=m*n;
    if(area%t==0&&m%a==0&&n%a==0)
    {
        num=area/t;
    }
    else
    {
        b=m%a;
        c=n%a;
        if(b!=0)
            m=m+(a-b);
        if(c!=0)
            n=n+(a-c);
        area=m*n;
        num=area/t;
    }

    printf("%lld",num);
    return 0;
}