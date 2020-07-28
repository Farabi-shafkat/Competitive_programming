#include<stdio.h>
int main()
{
    int m,n,z,i,count;
    count=0;
    scanf("%d %d %d",&n,&m,&z);
    for(i=0;i<=z;i++)
    {
        if(i%m==0&&i%n==0)
            count++;
    }
    printf("%d",count-1);

    return 0;

}
