#include<stdio.h>
int main()
{
    int pri_list[1000];
    int an=0;
    int is_pri[1001]={1,1,0};
    int i,j,k,p,ch,n,l;
    scanf("%d %d",&n,&l);
    for(i=2;2*i<=1000;i++)
    {
        is_pri[2*i]=1;
       //printf(":here");
    }
    for(i=3;i*i<=1000;i++)
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
    for(i=4;i<n;i++)
    {
        if(is_pri[i]==0)
        {
            p=i+1;
            while(is_pri[p]!=0)
            {
                p++;

            }
            if(p+i+1<=n&&is_pri[p+i+1]==0)
            {
                an++;
            //   printf("%d %d %d\n",p,i,p+i+1);
            }


        }

    }
  //  printf("%d",an);
    if(an>=l)
        printf("YES");
    else
        printf("NO");
    return 0;
}
