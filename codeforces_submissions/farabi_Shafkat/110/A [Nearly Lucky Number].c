#include<stdio.h>
int main()
{
    int i,c=0,p=0;
    char num[19];
    scanf("%s",num);
    for(i=0;i<strlen(num);i++)
    {
        if(num[i]=='4'||num[i]=='7')
            c++;
    }
  //  printf("%d",c);
    while(c>0)
    {
        if(c%10==7||c%10==4)
            p=1;
        else
        {
            p=0;
            break;
        }
        c=c/10;
    }
    if(p==1)
        printf("YES");
    else
        printf("NO");
    return 0;


}