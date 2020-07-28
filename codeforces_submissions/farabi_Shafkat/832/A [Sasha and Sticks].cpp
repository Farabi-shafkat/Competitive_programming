#include<stdio.h>
#include<string.h>
int main()
{
    long long n,k;
    scanf("%lld %lld",&n,&k);
    long long al;
    al=n/k;
    if(al%2==1)
        printf("yes\n");
    else
        printf("no\n");
}
