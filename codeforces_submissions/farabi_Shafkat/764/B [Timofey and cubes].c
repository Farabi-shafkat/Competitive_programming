#include<stdio.h>
int main()
{   int i,j;
    scanf("%d",&i);
    int x,ptn[i];
    for(j=0;j<i;j++)
       {
            scanf("%d",&ptn[j]);
       }
    for(j=0;j+1<=(i/2);j++)
    {
        if((j+1)%2!=0)
        {
            x=ptn[(i-1)-j];
            ptn[(i-1)-j]=ptn[j];
            ptn[j]=x;
        }
    }
    for(j=0;j<i;j++)
    {
        printf("%d ",ptn[j]);
    }
    return 0;

}