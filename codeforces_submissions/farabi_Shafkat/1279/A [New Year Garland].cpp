#include<bits/stdc++.h>
using namespace std;
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        ll mn=min3(a,b,c);
        ll mx=max3(a,b,c);
        ll mid=a+b+c-mn-mx;
        mx-=mn;
        mx-=mid;
      //  cout<<mx<<" "<<mid<<" "<<mn<<endl;
        if(mx<=1)
        {
            cout<<"Yes\n";
            continue;
        }
        mn=min3(a,b,c);
        mx=max3(a,b,c);
        mid=a+b+c-mn-mx;
        mx-=mn;
        mid-=mn;
        mn=0;

        mx-=mid;

        if(mx<=1)
        {
            cout<<"Yes\n";
            continue;
        }


        cout<<"No\n";
    }
}
/*
88
1000000000 500000000 500000000
*/

