#include<stdio.h>
int main()
{
    int n,h,t;
    scanf("%d %d",&n,&h);
    int sum=n,i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&t);
        if(t>h)
            sum++;
    }
    printf("%d",sum);
    return 0;
}
