#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,p,q;
    int chk[n];
    memset(chk,0,sizeof(chk));
    scanf("%d",&p);
    for(i=0;i<p;i++)
    {
        scanf("%d",&j);
        if(1<=j&&j<=n)
        chk[j-1]=1;
    }
    scanf("%d",&q);
    for(i=0;i<q;i++)
    {
        scanf("%d",&j);
        if(1<=j&&j<=n)
        chk[j-1]=1;
    }
    for(i=0;i<n;i++)
    {
        if(chk[i]==0)
        {
            printf("Oh, my keyboard!");
            return 0;
        }
    }
    printf("I become the guy.");
    return 0;
}