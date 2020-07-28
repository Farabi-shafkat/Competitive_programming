#include<stdio.h>
#include<string.h>
int main()
{
   char str[100001];
   long long int n;
   scanf("%lld ",&n,str);
   gets(str);
   long long i,a=0,d=0;
   for(i=0;i<n;i++)
   {
       if(str[i]=='A')
            a++;
       else if(str[i]=='D')
            d++;
   }
   if(a>d)
        printf("Anton");
   else if(d>a)
        printf("Danik");
   else
        printf("Friendship");
   return 0;
}
