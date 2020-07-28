#include<stdio.h>
int main()
{   int x,c,b=1;
    char lol[100];
    int i=0;
    while( scanf("%c",&lol[i])==1)
        {
           i++;
        }
    for(c=0;c<i;c++)
    {
        if(lol[c]==lol[c+1])
        {
            b++;
        }
        else
            b=1;
        if(b==7)
        {
            printf("YES");
            break;
        }
    }
    if(c==i)
        printf("NO");
}
