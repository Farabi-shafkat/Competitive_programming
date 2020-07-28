#include<bits/stdc++.h>
using namespace std;
gcd(int a,int b)
{
    int c=1;
   // cout<<a<<" "<<b<<endl;
    while(b%a!=0)
    {
        c=a;
        a= b%a;
        b=c;

    }
    //cout<<a<<endl;
    return a;
}
int main()
{
    int n,a,b;
    cin>>n;
    a=n/2;
    if(a+a==n)
        a--;
    b=n-a;
    while(gcd(a,b)!=1)
    {
        a--;
        b++;
    }
    cout<<a<<" "<<b;
}
