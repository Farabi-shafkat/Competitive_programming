#include<stdio.h>
#include<string.h>
int main()
{
    int n,p;
    scanf("%d",&n);
    char p1[]="I hate that";
    char p2[]="I love that";
    for(p=0;p<n-1;p++)
    {
        if(p%2==0)
            printf("%s",p1);
        else
            printf("%s",p2);
        printf(" ");
    }
    if(n%2==1)
        printf("I hate it");
    else
        printf("I love it");
    //printf("%s",)
    return 0;
}
