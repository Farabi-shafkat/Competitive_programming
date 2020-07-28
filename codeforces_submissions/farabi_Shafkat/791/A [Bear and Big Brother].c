#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,p;
    scanf("%lf %lf",&a,&b);
    double n;
    n=log(b/a)/log(1.5);
    p=ceil(n);
    if(p==n)
        p++;
    printf("%.0lf",p );
}
