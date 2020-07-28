#include<stdio.h>
int main()
{
    int i,n,j,k,a,b,c=0;
    int ghor[100];
    for(j=0;;)
    {
           
            if(scanf("%d%c",&ghor[j],&a)==2)
                j++;
            else
                break;
    }
    n=j;
    scanf("%d",&ghor[j]);
   // for(k=0;k<=j;k++)
              //  printf(" %d ",ghor[k]);
              //  printf("\n");
    //printf("ok");
    while(1)
    {
        c=0;
        for(i=0;i<=j-1;i++)
        {   
            if(ghor[i+1]<ghor[i])
                {   //printf(" i %d i+1 %d ",ghor[i],ghor[i+1]);
                    a=ghor[i+1];
                    ghor[i+1]=ghor[i];
                    ghor[i]=a;
                    c++;
                }
              //for(k=0;k<=j;k++)
                //printf(" %d ",ghor[k]);
               // printf("\n");
        }
        if(c==0)
            break;
    }
   // printf(" this is n %d ",n);
    for(i=0;i<n;i++)
    {
        printf("%d",ghor[i]);
        if(i<n-1)
            printf("+");

    }
    return 0;


}