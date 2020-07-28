#include<stdio.h>
void sel_sort(int ghor[],int m)
{
    int j,i,temp;
    for(j=0;j<m-1;j++)
    {
        for(i=j+1;i<m;i++)
        {
            if(ghor[i]<ghor[j])
            {
                temp=ghor[j];
                ghor[j]=ghor[i];
                ghor[i]=temp;
            }
        }
    }
    return ;
}
int main()
{
    int n,m,i,j,h=1000000;
    scanf("%d %d",&n,&m);
    int ghor[m];
    for(i=0;i<m;i++)
    {
        scanf("%d",&ghor[i]);
    }
    sel_sort(ghor,m);
    /*for(i=0;i<m;i++)
    {
        printf("%d ",ghor[i]);
    }*/
    for(i=0;i<=m-n;i++)
    {
        if((ghor[n+i-1]-ghor[i])<h)
            h=ghor[n+i-1]-ghor[i];
    }
    printf("%d",h);
    return 0;
}
