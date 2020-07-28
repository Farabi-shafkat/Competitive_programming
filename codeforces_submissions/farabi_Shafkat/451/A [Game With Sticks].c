#include<stdio.h>
void det(int x)
{
    if(x%2==0)
        printf("Malvika");
    else
        printf("Akshat");
    return;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a<=b)
        det(a);
    else
        det(b);
    return 0;
}