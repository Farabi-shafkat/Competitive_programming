#include<stdio.h>
#include<string.h>
int main()
{
    char alpha1[27],alpha2[27],chng[10001];
    gets(alpha1);
    gets(alpha2);
    gets(chng);
    int i,j;
    for(i=0;i<strlen(chng);i++)
    {
        for(j=0;j<26;j++)
        {
            if(alpha1[j]==chng[i])
            {
                chng[i]=alpha2[j];
                break;
            }
            else if(alpha1[j]==chng[i]-'A'+'a')
            {
                chng[i]=alpha2[j]-'a'+'A';
                break;
            }
        }

    }
    puts(chng);
}
