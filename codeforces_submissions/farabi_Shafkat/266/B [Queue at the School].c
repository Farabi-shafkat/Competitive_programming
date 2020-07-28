#include<stdio.h>
#include<string.h>
int main()
{
    int n,t;
    char temp;
    scanf("%d %d",&n,&t);
    char q[n];
    int i;
    scanf("%s",q);
    while(t--)
    {   //printf("%d",t);
        for(i=0;i<strlen(q)-1;i++)
        {

            if(q[i]=='B'&&q[i+1]=='G')
            {
                q[i]='G';
                q[i+1]='B';
                i++;
            }
        }
    }
    printf("%s",q);
}