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
#define for_(i,st,lim) for(ll i=st;i<lim;i++)
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
    ll n;
    FAST;
    cin>>n;
    while(n--)
    {
        ll a,b,c,rd;
        cin>>a>>b>>c>>rd;
        ll l,r;
        l=c-rd;
        r=c+rd;
        ll time=0;
        if(b<a)swap(a,b);
        if(l<a&&r>b)
        {
          //  cout<<"test1"<<endl;
            time=0;
        }
        else if (l<a&&a<=r&&r<=b)
        {//cout<<"test2"<<endl;
            time=b-r;
        }
        else if (r>b&&b>=l&&l>=a)
        {//cout<<"test3"<<endl;
            time=l-a;
        }
        else if (a<=l&&r<=b)
        {//cout<<"test4"<<endl;
          //  cout<<"here"<<_endl;
            time=(b-a)-(r-l);
        }
        else{
              //  cout<<"test5"<<endl;
            time=(b-a);
        }
        cout<<max(time,(ll)0)<<_endl;
    }
}

































