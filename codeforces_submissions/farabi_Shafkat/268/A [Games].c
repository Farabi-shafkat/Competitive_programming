#include<stdio.h>
int main()
{
    int i,n,j,an=0;
    scanf("%d",&n);
    int home[n],away[n];
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&home[i],&away[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(away[j]==home[i]&&j!=i)
                an++;

        }
    }
    printf("%d",an);
}
