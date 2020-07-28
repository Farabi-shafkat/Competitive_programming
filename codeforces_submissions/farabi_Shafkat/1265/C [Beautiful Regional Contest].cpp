#include<bits/stdc++.h>
using namespace std;

//#
//#  #
//#   #
//#    #
//#   # #
//#  #   ###
//#
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define FAST cin.tie(0); ios_base::sync_with_stdio (false)
#define pii pair<int,int>
#define TEN6 1000000
#define TEN5 100000
#define ipv pair<ll,vector<ll> >
#define pll pair<ll,ll>
#define CASE(x) "Case "<<x<<": "
#define _endl "\n"
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define debug(x) cout<<"DEBUG  "<<x<<" \n"
#define for_(i,lim) for(i=0;i<lim;i++)

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<pair<ll,ll> , null_type,less<pair<long long,long long >  >, rb_tree_tag,tree_order_statistics_node_update>
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}
bool cmpdesc(ll a,ll b)
{
    return a>b;
}
ll solved[4*TEN5+10];
int main()
{
     FAST;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll il;
        map< ll,ll, greater<ll> > mp;
        for_(il,n)
        {
            ll in;
            cin>>in;
            mp[in]++;
        }
        ll sz=floor(n/2.0);
        ll g=0,s=0,b=0;
        ll total=0;
       // cout<<"size "<<sz<<endl;
        for(auto it=mp.begin(); it!=mp.end(); it++)
        {
          //  cout<<it->first<<" "<<it->second<<" " <<total<<" "<<g<<" "<<s<<" "<<b<<endl;
            if(total+it->second > sz)break;
            if(g==0)
            {
                g=it->second;
                total+=it->second;
            }
            else if(s<=g)
            {
                s+=it->second;
                total+=it->second;
            }
            else
            {
                b+=it->second;
                total+=it->second;
            }

        }
       // cout<<g<<" sls "<<s<<" "<<b<<_endl;
        if(g<s && g<b && g+s+b <= sz)
        {
            cout<<g<<" "<<s<<" "<<b<<_endl;
        }
        else
        {
            g=0;
            s=0;
            b=0;
            cout<<g<<" "<<s<<" "<<b<<_endl;
        }


    }
}


























