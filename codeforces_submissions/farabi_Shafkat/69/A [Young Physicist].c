#include<stdio.h>
int main()
{
    int i,x=0,y=0,z=0,a,b,c;
    int n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        x=x+a;
        y+=b;
        z+=c;
    }
    if(z==0&&x==0&&y==0)
        printf("YES");
    else
        printf("NO");
    return 0;
}
