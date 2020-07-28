#include<stdio.h>
int main()
{
    long long int i,n,t;
    scanf("%lld %lld",&n,&t);
    long long ghor[n-1];
    for(i=0;i<n-1;i+=1)
    {
        scanf("%lld",&ghor[i]);
    }
    for(i=0;;i+=ghor[i])
    {
        if(i+1==t)
        {
            printf("YES\n");
            break;
        }
        else if(i>t)
        {
            printf("NO\n");
            break;
        }
    }
    return 0;
}