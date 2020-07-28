#include<stdio.h>
int main()
{
    int i,n,max=0,am=0,min=10001;
    scanf("%d",&n);
    int m;
    scanf("%d",&m);
    max=min=m;
    for(i=1;i<n;i++)
    {
        scanf("%d",&m);
        if(m>max)
        {
            max=m;
            am++;
        }
        else if(m<min)
        {
            min=m;
            am++;
        }
    }
    printf("%d",am);

}
