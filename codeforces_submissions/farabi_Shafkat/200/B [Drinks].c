#include<stdio.h>
int main()
{
    double sum=0,x,n,p;
    scanf("%lf",&n);
    p=n;
    while(n--)
    {
        scanf("%lf",&x);
        sum+=x;
    }
    printf("%.12lf",sum/p);

}
