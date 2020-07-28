#include<stdio.h>
#include<string.h>
int main()
{
    int n=0,l,i,j;
    char set[2000];
    gets(set);
    int solve[26];
    l=strlen(set);
    memset(solve,0,sizeof(solve));
    n=0;
    for(i=0;i<l;i++)
    {
        if(set[i]>='a'&&set[i]<='z')
            solve[set[i]-'a']++;
    }
    for(j=0;j<26;j++)
    {
        if(solve[j]!=0)
            n++;
    }
    printf("%d",n);
}
