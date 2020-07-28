#include<stdio.h>
int main()
{
    int i,k,l,m,n,d,c=0;
    scanf("%d %d %d %d %d",&k,&l,&m,&n,&d);
    //printf("n%d",n);
    for(i=1;i<=d;i++)
    {
        if(i%k==0||i%l==0||i%m==0||i%n==0)
          {
              c++;
          //  printf(" %d",i);
          }
    }
    printf("%d",c);
}
