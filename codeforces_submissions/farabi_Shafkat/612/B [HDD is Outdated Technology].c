#include<stdio.h>
int main()
{
    long long int i,n,f,p;
    scanf("%lld",&n);
    long long int sctr[n+2],frag[n+2];
    for(i=1;i<n+1;i++)
    {
        scanf("%lld",&frag[i]);
        sctr[frag[i]]=i;


    }
    long long int a,b,time;
    time=0;
    for(i=1;i<n;i++)
    {
        a=sctr[i];

        b=sctr[i+1];

        p=b-a;
        if(p>0)
            time=b-a+time;
        else
            time=a-b+time;
    }
    printf("%lld",time);
    return 0;

}