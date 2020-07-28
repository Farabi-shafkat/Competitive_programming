#include<stdio.h>
int main()
{
    int i,n,e=0,o=0,temp;
    scanf("%d",&n);
    int even[n-1],odd[n-1];
    for(i=0;i<n;i++)
    {
        scanf("%d",&temp);
        if(temp%2==0)
            even[e++]=i;
        else if(temp%2==1)
            odd[o++]=i;

    }
    if(e==1)
        printf("%d",even[0]+1);
    else if(o==1)
        printf("%d",odd[0]+1);
    return 0;

}
