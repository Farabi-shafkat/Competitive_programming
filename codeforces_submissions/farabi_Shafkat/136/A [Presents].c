#include<stdio.h>
int main()
{
    int n,i,temp;
    scanf("%d",&n);
    int ghor[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&temp);
        ghor[temp-1]=i+1;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",ghor[i]);
    }
    return 0;
}
