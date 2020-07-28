#include<stdio.h>
int main()
{
    int t,k,i,n;
    scanf("%d %d",&n,&k);
    t=240-k;
    for(i=1;i<=n;i++)
    {
        if(i*i+i>2.0*t/5.0)
            break;
    }
    i--;
    printf("%d",i);
    return 0;
}
