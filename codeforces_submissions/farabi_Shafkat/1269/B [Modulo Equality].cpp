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
#define max4(a,b,c,d) max(a,max3(d,b,c))
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

//bool is_prim[TEN5];
ll a[TEN5+10],b[TEN5+10];

int main()
{



    FAST;
    ll n,m;
    cin>>n>>m;
    ll a[n+10],b[n+10];
    ll i;
    for_(i,0,n)
    {
        cin>>a[i];
    }
    for_(i,0,n)
    {
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    set<ll>dif;
    ll beg;
    for_(beg,0,n)
    {
        dif.clear();
      //  cout<<endl;
        for_(i,0,n)
        {
            ll d=(b[(beg+i)%n]-a[i])%m;
          //  cout<<b[(beg+i)%n]<<" "<<a[i]<<" "<<d<<endl;
            if(d<0)d+=m;
            dif.insert(d);
            if(dif.size()>1)break;
        }
       // cout<<dif.size()<<" "<< i<<endl;
        if(dif.size()==1)
        {
            cout<<*(dif.begin())<<_endl;
            break;
        }
    }

}





























