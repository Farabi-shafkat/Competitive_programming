#include<stdio.h>
#include<math.h>


int main()
{
    double num,n,t,a;
    scanf("%lf %lf",&n,&t);
    double ch=floor(log10(t))+1;
    //printf("%d %d",ch,t);
    if(ch>n)
        printf("-1");
    else if(t!=10)
    {

        for(a=0;a<n;a++)
            printf("%.0lf",t);

    }
    else
    {
        printf("1");
        for(a=1;a<n;a++)
            printf("0");
    }
    return 0;


}

