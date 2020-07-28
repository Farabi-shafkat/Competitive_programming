#include<stdio.h>
int main()
{
    int i,j,c=0;
    char stng[100];
    scanf("%s",stng);
    char alp[26];
    for(i=0;i<26;i++)
    {
        alp[i]=0;
    }
    for(j=0;j<strlen(stng);j++)
    {
        alp[stng[j]-'a']=1;
    }
    for(j=0;j<26;j++)
    {
        if(alp[j]==1)
            c++;
    }
    if(c%2==0)
        printf("CHAT WITH HER!");
    else
        printf("IGNORE HIM!");
    return 0;

}
