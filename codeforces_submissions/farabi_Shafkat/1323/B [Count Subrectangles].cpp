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
#define ordered_set tree<ll , null_type,less<ll  >, rb_tree_tag,tree_order_statistics_node_update>

#define MOD TEN9+7 ///////<<<<<<<<<<<<<<<<<<=====MOD value change here!!!!!
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
bool cmp(ll a,ll b)
{
    return (a|b)-b > (a|b)-a;

}
int main()
{

    ll n,m,k;
    //cin>>n>>m>>k;
    scanf("%lld%lld%lld",&n,&m,&k);
    ll a[n+10];
    ll b[m+10];
    for_(i,0,n)
    {
        // cin>>a[i];
        scanf("%lld",&a[i]);
        //  cout<<i<<_endl;
    }
    for_(i,0,m)
    {
        //  cin>>b[i];
        scanf("%lld",&b[i]);
        //  cout<<i<<_endl;
    }
    set<ll>div;
    for(ll i=1;i*i<=k;i++)
    {
        if(k%i==0){
            div.insert(i);
            div.insert(k/i);
        }
    }
    ll ans=0;
    for(ll d:div)
    {
        ll v=k/d;
        //cout<<d<<" "<<v<<_endl;
        ll sm=0;
        ll ways1=0;
        for_(i,0,n)
        {
            if(a[i]==1)sm++;
            if(a[i]==0||i==n-1)
            {
                ways1+=max(sm-d+1,(ll)0);
                sm=0;
            }
        }
        ll ways2=0;
        sm=0;
        for_(i,0,m)
        {
            if(b[i]==1)sm++;
            if(b[i]==0||i==m-1)
            {
                ways2+=max(sm-v+1,(ll)0);
                sm=0;
            }
        }
        ans+=ways1*ways2;

    }
    cout<<ans<<_endl;

}

















































