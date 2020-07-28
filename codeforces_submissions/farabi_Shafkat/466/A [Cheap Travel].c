#include<stdio.h>
int main()
{
    int n,m,a,b;
    scanf("%d %d %d %d",&n,&m,&a,&b);
    int i,j;
    int min=1000000000;
    for(i=0;i<=n/m+1 ;i++)
    {
        for(j=0;j<=n;j++)
        {
            if(i*m+j>=n&&i*b+j*a<min)
            {
                min=i*b+j*a;
                //printf("%d %d %d\n",i,j,min );
            }
        }
    }
    printf("%d",min);
    return 0;
}