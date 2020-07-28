#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k;
    cin>>n>>k;
    long long int num;
    if(k<=n)
    {
        num=k-1-k/2;
    }
    else
    {
        num=n-k/2;
    }
    if(num<0)
        num=0;
    cout<<num;

}
