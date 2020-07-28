#include<stdio.h>
int main()
{
    int n,x;
    char a,b,c;
    x=n=0;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {   //fflush(stdin);
        scanf(" %c %c %c",&a,&b,&c);
        if(a=='+'||b=='+'||c=='+')
            x++;
        else if(a=='-'||b=='-'||c=='-')
            x--;
    }
    printf("%d",x);
    return 0;
}
