#include<stdio.h>
int main ()
{
    int h=0,i,a,b,n,sum=0,c=0,q;
    scanf("%d",&n);
    int cvalue[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&cvalue[i]);
        sum=sum+cvalue[i];
    }
    int total=0;
    b=0;
    while(total<=sum)
    {   h=0;
        for(a=0;a<n;a++)
        {
            //h=0;
            if(cvalue[a]>=h)
                {
                    h=cvalue[a];
                    b=1;
                    q=a;
                    //printf("%d",h);
                }
        }
        if(b==1)
     {  //printf("cval%d ",cvalue[q]);
        sum=sum-cvalue[q];
        total=total+cvalue[q];
        //printf("\ntotal%d ts%d\n",sum,total);
         c++;
         //printf("%d\n",c);
        cvalue[q]=-1;
        b=0;
    }
    }

    printf("%d",c);
}