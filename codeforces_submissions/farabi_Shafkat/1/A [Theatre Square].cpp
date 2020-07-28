#include<stdio.h>
int main()
{
    long long int n,m,a,num;
    scanf("%lld %lld %lld",&n,&m,&a);
    if((n%a==0)&&(m%a==0))
    {
        num=(n/a)*(m/a);
    }
    else if((n%a==0)&&(m%a!=0))
    {
        num=(n/a)*((m/a)+1);
    }
    else if((n%a!=0)&&(m%a==0))
    {
        num=(m/a)*((n/a)+1);
    }
    else
    {
        num=((n/a)+1)*((m/a)+1);
    }
    printf("%lld",num);
}