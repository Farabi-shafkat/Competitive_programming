#include<stdio.h>
int digitex(int i,int digit[])
{
    int c=0;
    while(i>0)
    {
        digit[c]=i%10;
        i=i/10;
        c++;
    }
}
int main()
{
    int yr,digit[4];
    scanf("%d",&yr);
    int i;
    for(i=yr+1;;i++)
    {
        digitex(i,digit);
        if(digit[0]!=digit[1]&&digit[0]!=digit[3]&&digit[0]!=digit[2]&&digit[1]!=digit[2]&&digit[1]!=digit[3]&&digit[2]!=digit[3])
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}
