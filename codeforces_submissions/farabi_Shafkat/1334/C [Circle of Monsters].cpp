/*
 
 
               BASIC TEMPLATES
 
 
*/
 
 
#include<bits/stdc++.h>
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
#define TEN4 10000
#define TEN9 1000000000
#define ipv pair<ll,vector<ll> >
#define pll pair<ll,ll>
#define CASE(x) "Case "<<x<<": "
#define _endl "\n"
#define max3(a,b,c) max(a,max(b,c))
#define max4(a,b,c,d) max(a,max3(d,b,c))
#define min3(a,b,c) min(a,min(b,c))
#define debug(x) cout<<"DEBUG  "<<x<<" \n"
#define for_(i,st,lim) for(ll i=st;i<lim;i++)
#define for_r(i,st,lim) for(ll i=st-1;i>=lim;i--)
#define fRead(x) freopen(x,"r",stdin)
#define fWrite(x) freopen (x,"w",stdout)
#define all_set(arr,val) memset(arr,val,sizeof(arr))
#define all(x) x.begin(),x.end()
 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
//lower_bound returns an iterator pointing to the first element in the range [first,last) which has a value not less than ‘val’.
 
//upper_bound returns an iterator pointing to the first element in the range [first,last) which has a value greater than ‘val’.
using namespace __gnu_pbds;
#define ordered_set tree<pair<ll,ll> , null_type,less<pair<long long,long long >  >, rb_tree_tag,tree_order_statistics_node_update>
 
#define MOD 998244353 ///////<<<<<<<<<<<<<<<<<<=====MOD value change here!!!!!
#define INF 5e18
 
 
ll BMod(ll B,ll P,ll M)
{
    ll R=1;
    B=B%M;
    while(P)
    {
        if(P&1)
            R=(R*B)%M;
        P >>= 1;
        B=(B*B)%M;
    }
    return R;
}
 
ll invMOD(ll num,ll M)
{
    return BMod(num,M-2,M);
}
 
 
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
 
}
 
 
 
 
pll arr[3*(TEN5) +10];
//ll sum[3*(TEN5) +10];
 
int main()
{
    FAST;
    ll t;
    cin>>t;
 
    while(t--)
    {
        ll n;
        cin>>n;
        //ordered_set oset;
        //priority_queue<pll,vector<pll>,CustomCompare>q;
        // set<pair<pll,ll> ,CustomCompare>st;
        // all_set(sum,0);
        ll sum=0;
        for_(i,0,n)
        {
            //arr[i].ff=i;
            cin>>arr[i].ff>>arr[i].ss;
 
            //arr[i].ss*=-1;
            //st.insert({ {arr[i].ff,arr[i].ss},i });
        }
        for_(i,0,n)
        {
            sum+=max((arr[i].ff-arr[(i-1+n)%n].ss),(ll)0);
           // cout<<": s "<<max((arr[i].ff-arr[(i-1+n)%n].ss),(ll)0)<<_endl;
        }
        //cout<<sum<<" ss "<<_endl;
        ll mn=INF;
        for_(i,0,n)
        {
            mn=min(mn,sum-max((arr[i].ff-arr[(i+1)%n].ss),(ll)0)+arr[i].ff);
        }
        cout<<mn<<_endl;
    }
 
 
 
}