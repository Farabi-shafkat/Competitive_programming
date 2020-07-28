#include<stdio.h>
#include<string.h>
int main()
{
    char dub[201];
    scanf("%s",dub);
    int i,l,c=1;
    l=strlen(dub);
    for(i=0;i<l;i++)
    {
        if(dub[i]=='W'&&dub[i+1]=='U'&&dub[i+2]=='B'&&(i!=l-2||i!=l-1))
        {
            i+=2;
            if(i!=0&&c!=1)
            {
                printf(" ");
                c=1;
            }
        }
        else
            {
                printf("%c",dub[i]);
                c=0;
            }
    }

}
