#include<stdio.h>
int ferb(int a,int b,int sum)
{


    int remain=0;
    while(a/b!=0)
    {
        sum=sum+a/b;
        remain=remain+a%b;
        a=a/b;
        if(a/b==0)
        {

            remain+=a;
            sum=sum+ferb(remain,b,0);
           // printf("loopentry");
        }



    }
    return sum;
}
int main()
{
    int a,b;
    int sum;

    scanf("%d %d",&a,&b);
    sum=ferb(a,b,a);
    int remain=0;
    /*while(a/b!=0)
    {
        sum=sum+a/b;
        remain=remain+a%b;
        if(a==1)
        {

            remain++;
        }
        a=a/b;


    }
    */
    printf("%d",sum);
}
