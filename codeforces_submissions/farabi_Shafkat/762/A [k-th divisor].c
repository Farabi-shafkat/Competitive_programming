
#include<stdio.h>
#include<math.h>
int main()
{
    long long int p,n,k,pd,c=0;
    scanf("%lld %lld",&n,&k);
    if(k==1)
        {
        printf("1");
        goto A;
        }
    int d=2;
    p=n;






     long long int r=n;

     long long int div[100000];
     long long int i,v;
     for(i=1,v=0;r>=i*i;i++)
     {
        if(r%i==0)
        {


            div[v]=i;
            if(i!=1)
                    n=r/i;
           // printf("all is well n%lld i%lld\n",n,i);
            div[100000-v-1]=n;
            v++;
           //printf("%d %lld\n%d %lld",v,div[v],100000-v-1, div[100000-v-1]);

            }
           // printf("%d\n",v);

     }

     div[100000-v-1]=r;

    //printf(">>%d %lld\n%d %lld",v,div[v],100000-v-1, div[100000-v-1]);
    if(div[v-1]==div[100000-v]&&k>v)
        {k++;}

     if(k>v+v)
        printf("-1");
     else if(k<=v)
        {
            //printf("here\n");
            printf("%lld",div[k-1]);
        }
     /*else if(div[100000-1-v+k-v]==div[k-2])
     {
         printf("%lld",div[100000-1-v+k-v+1]);
     }*/
     else if(1)
        printf("%lld",div[100000-1-v+k-v]);
    //else if(r>=100000)
       // printf(" %lld",div[100000-2-v+k-v]);

    A:
    return 0;
}
