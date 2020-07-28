#include<stdio.h>
int main()
{
    long long n,l,i,j,max=0,b=0,e=0;
    scanf("%lld %lld",&n,&l);
    long long ghor[n];
    long long diff[n+1];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&ghor[i]);
    }
    long long min=1000000001,in;
    for(i=0;i<n;i++)
    {
        min=ghor[i];
        in=i;
        for(j=i+1;j<n;j++)
            if(min>ghor[j])
            {
                min=ghor[j];
                in=j;

            }
        ghor[in]=ghor[i];
        ghor[i]=min;
        if(i==0)
            {
                diff[i]=ghor[i];
                /*if(ghor[i])
                    {
                        b=1;
                       // printf("happened %lld ",b);
                    }*/
            }
        else
            diff[i]=ghor[i]-ghor[i-1];
        if(max<diff[i])
            max=diff[i];

    }

    //printf("%lld %lld %lld",max,diff[0],diff[n]);
    diff[i]=l-ghor[i];

    diff[n]=l-ghor[n-1];
       /*for(i=0;i<n+1;i++)
        printf(" %lld\n",diff[i]);*/
    //printf("e%lld b%lld ",e,b);
  //  for(i=0;i<n;i++)
    //    printf("%lld",ghor[i]);
    if(max>diff[0]+diff[0]&&max>diff[n]+diff[n])
        printf("%.9lf",max/2.0);
    else if(diff[0]>diff[n])
       printf("%.9lf",diff[0]*1.0);
    else
        printf("%.9lf",diff[n]*1.0);

}