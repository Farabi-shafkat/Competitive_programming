#include<stdio.h>
int gcd(int x,int y)
{
    int a,b;
    if(x>y)
    {
        a=x;
        b=y;
    }
    else
    {
        a=y;
        b=x;
    }
    int temp;
    while(b!=0)
    {
        temp=a%b;
        a=b;
        b=temp;
    }
    return a;
}
int main()
{
    int a,b,n,x,turn=1;
    scanf("%d %d %d",&a,&b,&n);
    while(1)
    {
        if(turn%2==1)
        {
            x=gcd(a,n);
            if(n<x)
                break;
            n=n-x;
        }
        else if(turn%2==0)
        {
            x=gcd(b,n);
            if(n<x)
                break;
            n=n-x;
        }
        //printf("n%d x%d turn%d\n",n,x,turn);
        turn++;
    }
    if(turn%2==0)
        printf("0");
    else if(turn%2==1)
        printf("1");
    return 0;
}




