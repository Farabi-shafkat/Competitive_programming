#include<stdio.h>
int main()
{
    int n,m=0,a,b,j,k,i,h=0;
    scanf("%d",&n);
    for(i=0;i<n-1;i++)
    {
        scanf("%d %d",&a,&b);
        m=m-a+b;
        if(m>h)
            h=m;
       // printf("\n%d\n",m);
    }
    printf("%d",h);
    return 0;
}
