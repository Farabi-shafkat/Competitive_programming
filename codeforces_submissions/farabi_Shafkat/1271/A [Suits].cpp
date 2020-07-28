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
#define for_(i,st,lim) for(i=st;i<lim;i++)
#define fRead(x) freopen(x,"r",stdin)
#define fWrite(x) freopen (x,"w",stdout)
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<pair<ll,ll> , null_type,less<pair<long long,long long >  >, rb_tree_tag,tree_order_statistics_node_update>

#define MOD 998244353 ///////<<<<<<<<<<<<<<<<<<=====MOD value change here!!!!!
#define INF 5e13


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
bool cmpdesc(ll a,ll b)
{
    return a>b;
}
ll my_abs(ll a)
{
    if(a<0)a*=-1;
    return a;
}
int main()
{

    ll a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    ll a1,b1,c1,d1;
    a1=a;
    b1=b;
    c1=c;
    d1=d;
    ll j1=min(a,d);
    ll cost1 = j1*e;
    a1-=j1;
    d1-=j1;
    ll j2=min(b1,min(c1,d1));
    cost1+= j2*f;


    j2=min(b,min(c,d));
    ll    cost2= j2*f;
    b-=j2;
    c-=j2;
    d-=j2;
    j1=min(a,d);
    cost2+= j1*e;


    cout<<max(cost1,cost2)<<_endl;








}
