#include<stdio.h>
int main()
{

    int is_pri[44722]={1,1,0};
    int i,j,k,p,ch,n,l;
    //scanf("%d %d",&n,&l);
    for(i=2;2*i<=44722;i++)
    {
        is_pri[2*i]=1;
       //printf(":here");
    }
    for(i=3;i*i<=44722;i++)
    {
        ch=0;
        for(j=2;j*j<=i;j++)
        {
            if(i%j==0&&is_pri[j]==0)
            {
                is_pri[i]=1;
                ch=1;
            }
        }
        if(ch==0)
        {
            is_pri[i]=0;
            for(p=2;p*i<=n;p++)
                is_pri[p*i]=1;
        }
    }
    //for(i=0;i<44722;i++)
        //printf("%d %d\n",i,is_pri[i]);
    long long int num;
    scanf("%lld",&num);
    if(num==2)
        printf("1");
    else if(num%2==0)
        printf("2");
    else
    {
        ch=0;
        for(i=0;i<44722;i++)
        {
            if(is_pri[i]==0&&num%i==0&&i!=num)
                {
                    for(j=0;j<44722;j++)
                    {
                        if(is_pri[j]==0&&(num-2)%j==0&&j!=num-2)
                        {
                            printf("3");
                            ch=2;
                            break;
                        }
                    }
                    if(ch!=2)
                        printf("2");
                    ch=1;
                    break;

                }
        }
        if(ch==0)
            printf("1");
    }
    return 0;
}