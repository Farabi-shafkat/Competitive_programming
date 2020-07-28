#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,s,b,st=0;
    scanf("%d ",&n);
    char org[n],com[n],sp;
    for(i=0;i<n;i++)
        {
            scanf("%c",&org[i]);
           // printf("%d",i);
        }
    scanf("%c",&sp);
    for(i=0;i<n;i++)
       {
           scanf("%c",&com[i]);
           if(com[i]>org[i])
           {
               s=org[i];
               b=com[i];
           }
           else
           {
               b=org[i];
               s=com[i];
           }
           if(b-s<s+10-b)
              st+=b-s;
           else
              st+=s+10-b;
            //printf("\n%d\n",st);
        }
    printf("%d",st);

}