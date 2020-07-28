#include<stdio.h>
#include<string.h>
int main()
{
    int i,l,k;
    char s[130],t[130];
    scanf("%s %s",s,t);
    l=strlen(s);
    k=strlen(t);
    if(k!=l)
    {
        printf("NO");
        return 0;
    }
    for(i=0;i<l;i++)
    {
        if(s[i]!=t[l-i-1])
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}
