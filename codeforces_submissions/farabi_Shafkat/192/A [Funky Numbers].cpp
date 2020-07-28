#include<stdio.h>
#include<math.h>
int main()
{
    long long i,n,sz,e,s,ch;
    scanf("%lld",&n);
    //printf("ok");
    int num;
    num=(int)sqrt((n+n));
    long long tri[num];
    //printf("ok");
    for(i=0;(i+1)*(i+2)<n+n;i++)
    {
        tri[i]=((i+1)*(i+2))/2;
       // printf("%lld\n",tri[i]);
    }
    sz=i;
    for(i=0;i<=sz;i++)
    {
        ch=0;
        s=0;
        e=sz;
        while(1)
        {
            if(tri[(e+s)/2]==n-tri[i])
            {
                printf("YES");
                ch=1;
                break;
            }
            else if(tri[(e+s)/2]>n-tri[i])
            {
                if(s==(s+e)/2)
                    break;
                e=(e+s)/2;
            }
            else if(tri[(e+s)/2]<n-tri[i])
            {
                if(s==(s+e)/2)
                    break;
                s=(s+e)/2;

            }
        }
        if(ch==1)
            return 0;

    }
     if(ch==0)
            printf("NO");
}
