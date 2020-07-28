#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);

    if((a+b>c&&a+c>b&&b+c>a)||(a+d>c&&a+c>d&&d+c>a)||(d+b>c&&d+c>b&&b+c>d)||(a+b>d&&a+d>b&&b+d>a))
        printf("TRIANGLE");
    else if((a+b==c||a+c==b||b+c==a)||(a+d==c||a+c==d||d+c==a)||(d+b==c||d+c==b||b+c==d)||(a+b==d||a+d==b||b+d==a))
        printf("SEGMENT");
    else
        printf("IMPOSSIBLE");
    return 0;
}
