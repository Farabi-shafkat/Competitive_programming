#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,mx,mn;
    cin>>n>>k;
    if(k==0)
    {
        mx=0;
        mn=0;
    }
    else if(n==k)
    {
        mx=0;
        mn=0;
    }
    else if(n>k&&n<3*k)
    {
        mn=1;
        mx=n-k;
    }
    else if(n>=3*k)
    {
        mx=2*k;
        mn=1;
    }
    cout<<mn<<" "<<mx;

}
