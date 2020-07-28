#include<stdio.h>
int length(char key[])
{
    int i,l=0,j;
    for(i=0;key[i]!='\0';i++);
        //printf("%c",key[i]);
    //printf(" %d ",i);
    return i;
}
int main()
{   int l,i,j;
    char key[100]={};
    scanf("%s",key);
        l=length(key);
    char temp[100]={};
    if(key[0]>='a'&&key[0]<='z')
        {
            for(i=1;i<l;i++)
            {
                if(key[i]>='A'&&key[i]<='Z')
                   {
                       temp[i]=key[i];
                       key[i]=key[i]-'A'+'a';
                   }
                else
                    break;
            }
            if(i==l)
            {
                key[0]=key[0]-'a'+'A';
            }
            else
            {
                for(j=1;j<i;j++)
                    key[j]=temp[j];
            }
        }
        else
        {
            for(i=0;i<l;i++)
            {
                if(key[i]>='A'&&key[i]<='Z')
                   {
                       temp[i]=key[i];
                       key[i]=key[i]-'A'+'a';
                   }
                else
                    break;
            }

            if(i!=l)
            {
                for(j=0;j<i;j++)
                    key[j]=temp[j];
            }
        }
        for(i=0;i<l;i++)
        {
            printf("%c",key[i]);
        }
}
