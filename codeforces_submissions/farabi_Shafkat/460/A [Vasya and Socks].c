#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    //printf("%d",b);
    int div1,div2,div3;
    div1=a/b;
    //printf("%d",div1);
    a=a+div1;
    div2=div1;
    //printf("%d",a);
    while(((a/b)-div2)>0)
    {
        div2=a/b;
        div3=div2-div1;
        div1=div2;
        a=a+div3;
      //  printf(" %d",a);
    }
    printf("%d",a);
}
