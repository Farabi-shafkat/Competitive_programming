#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,c=0;
    char s[100];
    char chk[]={"hello"};
    scanf("%s",s);
    n=strlen(s);
   // printf("%d",n);
    for(i=0;i<n;i++)
    {
        if(s[i]==chk[c])
        {

           // printf("%c i%d c%d",chk[c],i,c);
            c++;
        }
        if(chk[c]=='\0')
        {
            printf("YES");
            return 0;
        }

    }
    printf("NO");
    return 0;
}
