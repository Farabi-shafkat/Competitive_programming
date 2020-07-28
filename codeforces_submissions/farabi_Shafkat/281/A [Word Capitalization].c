#include<stdio.h>
int main()
{
    char ghor[1000];
    scanf("%s",ghor);
    if(ghor[0]>='a'&&ghor[0]<='z')
        ghor[0]=ghor[0]-'a'+'A';
    printf("%s",ghor);
    return 0;
}
