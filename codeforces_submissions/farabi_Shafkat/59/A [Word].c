#include<stdio.h>
#include<string.h>
int main()
{
    char str[200];
    gets(str);
    int i,alphalow=0,alphahigh=0;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]>='a'&&str[i]<='z')
            alphalow++;
        else if(str[i]>='A'&&str[i]<='Z')
            alphahigh++;
    }
    if(alphalow>=alphahigh)
        strlwr(str);
    else
        strupr(str);
    puts(str);
}
