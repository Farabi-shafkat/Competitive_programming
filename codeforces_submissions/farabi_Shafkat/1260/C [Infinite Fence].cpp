
#include<bits/stdc++.h>
using namespace std;

//#
//#  ######
//#  #    #
//#  ######
//#  #    #
//#  #    #   P E R T U R E
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

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll r,b,k;
        cin>>r>>b>>k;
        if(r>b)swap(r,b);
        if(gcd(r,b)+(k-1)*r<b)cout<<"rebel\n";
        else cout<<"obey\n";
    }
}
