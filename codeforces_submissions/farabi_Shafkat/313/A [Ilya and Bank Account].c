#include<stdio.h>
int main()
{
    char ghor[12],del='0';
    int i=1,delin;
    gets(ghor);
    if(ghor[0]!='-')
        puts(ghor);
    else
    {
        i=strlen(ghor)-2;
        //printf("here");
        while(ghor[i]!='\0')
        {
            if(del<=ghor[i++])
                {
                    del=ghor[i-1];
                    delin=i-1;
                }
        }
        i=0;
        if(ghor[3]=='\0')
        {
            if(ghor[1]=='0'||ghor[2]=='0')
                i=1;
        }

        for(;ghor[i]!='\0';i++)
        {
            if(i!=delin)
                printf("%c",ghor[i]);
        }
    }
}
