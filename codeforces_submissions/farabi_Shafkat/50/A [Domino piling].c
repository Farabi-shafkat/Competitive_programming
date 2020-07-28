#include<stdio.h>
int main()
{
    int m,n,ans;
    scanf("%d %d",&m,&n);
    int multi;
    multi=m*n;
    if(multi%2==0)
    {
        ans=multi/2;
    }
    else
    {
        ans=(multi-1)/2;
    }
    printf("%d",ans);
    return 0;
}
