#include<stdio.h>
int main()
{
    long long int n,m;
    scanf("%lld %lld",&n,&m);
    //long long task[m];
    long long i;
    long long time=0,t1,t2=1;
    while(m--)
    {
        //printf("loopentry");
        scanf("%lld",&t1);
        if(t1>=t2)
            time+=t1-t2;
        else
            time+=n-t2+t1;
        t2=t1;

    }
    printf("%lld",time);
}
