#include<bits/stdc++.h>
using namespace std;
long long a[2*100001];
long long b[2*100001];
int main()
{
    long long n;
    cin>>n;
    for(int i=0;i<n/2;i++)
    {
        scanf("%lld",&b[i]);
    }
    long long mn=0;
    a[0]=0;
    a[n-1]=b[0];
    for(int i=1;i<n/2;i++)
    {
        if(b[i]-mn>=a[n-1-(i-1)])
        {
            a[n-1-i]=a[n-1-(i-1)];
            a[i]=b[i]-a[n-1-i];
            mn=a[i];
        }
        else
        {
            a[i]=mn;
            a[n-1-i]=b[i]-mn;
        }
    }
    for(int i=0;i<n;i++)
        printf("%lld ",a[i]);

}
