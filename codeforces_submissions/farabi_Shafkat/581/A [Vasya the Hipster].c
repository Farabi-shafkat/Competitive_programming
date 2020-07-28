#include<stdio.h>
int main()
{
   int a,b,x;
   scanf("%d %d",&a,&b);
   if(b>a)
   {
       x=a;
       a=b;
       b=x;
   }
   printf("%d %d",b,(a-b)/2);
   return 0;
}
