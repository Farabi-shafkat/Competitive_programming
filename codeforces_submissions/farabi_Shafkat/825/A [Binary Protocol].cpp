#include<stdio.h>
#include<string.h>
#include<math.h>
long long mpow(int a,int b)
{
    int j;
    long long r=1;
    for(j=0;j<b;j++)
    {
        r=a*r;
    }
    return r;
}
int main()
{
    int d,dn,i,p=0;
    scanf("%d",&dn);
    char num[dn];
    scanf("%s",num);
    long long v=0,dig=0;
    for(i=dn-1;i>=0;i--)
    {
        if(num[i]=='0')
            {

                v=v+dig*mpow(10,p);
                p++;
                dig=0;
            }
        else if(num[i]=='1')
            dig++;
    }
    if(num[0]=='1')
        v=v+dig*mpow(10,p);
    printf("%lld\n",v);
}
