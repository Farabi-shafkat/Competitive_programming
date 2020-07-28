#include<stdio.h>
int main()
{
    int n,i,t_vol;
    double percentage,x,sum=0;
 
    scanf("%d",&n);
 
    int ara[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
 
    }
 
 
    for(i=0;i<n;i++)
    {
     x= ara[i]/100.0;
     sum=sum+x;
 
    }
 
    t_vol=n;
 
    percentage=(sum/t_vol)*100.0;
 
    printf("%.12lf",percentage);
 
 
}