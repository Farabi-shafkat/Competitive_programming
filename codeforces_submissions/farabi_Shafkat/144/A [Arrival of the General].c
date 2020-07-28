#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int sol[n],min=100,max=0,sin,bin,step;
    for(i=0;i<n;i++)
    {
        scanf("%d",&sol[i]);
        if(sol[i]<=min)
            {
                min=sol[i];
                sin=i;

            }
        if(sol[i]>max)
            {
                max=sol[i];
                bin=i;
            }

    }
    if (min==max)
        printf("%d\n",0);
    else
    {
        step=bin+n-1-sin;
        if(bin>sin)
            step--;
        printf("%d\n",step);
    }
}