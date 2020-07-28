#include<bits/stdc++.h>
using namespace std;
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define ll long long
#define siz 100000+10
#define _endl "\n"
#define for_(i,s,e) for(ll i=s;i<e;i++)
#define for_r(i,s,e) for(ll i=s-1;i>=e;i--)
ll rec[siz];
ll tim[siz];
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,s;
        cin>>n>>s;
        tim[0]=0;
        ll lt=-1;
        for_(i,1,n+1)
        {
            cin>>rec[i];
            tim[i]=tim[i-1]+rec[i];
            if(tim[i]>s && lt==-1)
                lt=i;
        }
     //   cout<<lt<<"  lt "<<endl;
        if(lt==-1)
        {
            cout<<0<<_endl;
            continue;
        }
        if(lt==n)
        {
            cout<<n<<_endl;

            continue;
        }
        ll ans=-1;
        ll mx=-1;
        for_(i,1,lt+2)
        {
            //if(i==n-1)break;
            //mx=max(mx,rec[i]);
            //ans=i;
            if(rec[i]>mx)
            {
                mx=rec[i];
                ans=i;
            }
        }
      //  cout<<mx<<" "<<abs
        if(ans==lt&&tim[lt+1]-mx<=s)
        {
            cout<<ans<<_endl;
        }
        else if(tim[lt]-mx<=s)
        {
            cout<<ans<<_endl;
        }








    }
}
/*
88
1000000000 500000000 500000000
*/

