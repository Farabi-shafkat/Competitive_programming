#include<stdio.h>
#include<string.h>
int main()
{
    long long pc,c,i,n;
    char str[3];
    pc=1000000;
    c=0;
    int an=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {

        scanf("%s",&str);
        c=strcmp(str,"10");
       // printf("c>>%d\n",c);
        if(c!=pc)
        {
           // printf("\nin\n");
            pc=c;
            an++;
        }
    }
   // an++;
    printf("%d\n",an);
}
