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

ll num[2*TEN5+10];
ll st[2*TEN5+10];
ll en[2*TEN5+10];
int main()
{
    ll n;
    cin>>n;
    ll i;
    //ll mx=1;
    for_(i,0,n)
    {
        cin>>num[i];
        st[i]=1;
        en[i]=1;
    }


    for_(i,1,n)
    {
        if(num[i]>num[i-1])
        {
            en[i]=en[i-1]+1;
        }
    }

    for(i=n-2;i>=0;i--)
    {
        if(num[i]<num[i+1])
        {
            st[i]=st[i+1]+1;
        }
    }
//    for_(i,0,n)
//    {
//        cout<<st[i]<<" ";
//    }
//    cout<<endl;
//    for_(i,0,n)
//    {
//        cout<<en[i]<<" ";
//    }
//    cout<<endl;
    ll mx=0;
    for_(i,0,n)
    {
       // cin>>num[i];
        //st[i]=1;
       // en[i]=1;
       mx=max(mx,st[i]);

    }
    ll ans=0;
    ans=max(ans,st[1]);
    ans=max(ans,en[n-2]);
    for_(i,1,n-1)
    {
        if(num[i-1]<num[i+1])
            ans=max(ans,en[i-1]+st[i+1]);
    }
    cout<<max(ans,mx)<<_endl;
}








































