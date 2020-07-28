#include<stdio.h>
int main()
{
    int n,i,j,p,q;
    scanf("%d",&n);
    int c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&p,&q);
        if(q-p>=2)
            c++;
    }
    printf("%d",c);
    return 0;

}