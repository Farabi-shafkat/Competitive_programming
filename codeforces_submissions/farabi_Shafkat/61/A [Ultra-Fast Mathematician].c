#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char num1[1000],num2[1000];

    scanf("%s %s",num1,num2);
    char ans[strlen(num1)];
    for(i=0;i<strlen(num1);i++)
    {
        if(num1[i]!=num2[i])
            ans[i]='1';
        else
            ans[i]='0';

    }
    ans[i]='\0';
    printf("%s",ans);
}
