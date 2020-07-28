#include<stdio.h>
int main()
{
    long long n,sum=1,j=1;
    scanf("%lld",&n);
    while(n>=sum)
    {
        j++;
        n-=sum;
        sum=(j*(j+1)/2);
       // printf("s%lld n%lld\n",sum,n);
    }
    printf("%lld",j-1);
}
