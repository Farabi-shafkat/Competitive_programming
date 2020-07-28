#include<stdio.h>
int main()
{
    int i,j;
    char ghor[100];
    scanf("%s",ghor);
    for(i=0;ghor[i]!='\0';i++);
    for(j=0;j<i;j++)
    {
        if(ghor[j]=='H'||ghor[j]=='Q'||ghor[j]=='9')
        {
            printf("YES");
            break;
        }
        if(j==i-1)
        printf("NO");
    }

    return 0;
}
