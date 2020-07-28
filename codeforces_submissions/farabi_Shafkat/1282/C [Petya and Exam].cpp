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
bool cmp(pair<ll,ll>a,pair<ll,ll>b)
{
    if(a.ss==b.ss)return a.ff<b.ff;
    return a.ss<b.ss;
}
int main()
{
    FAST;
    ll m;
    cin>>m;
    while(m--)
    {
        ll n,t,a,b;
        cin>>n>>t>>a>>b;
        pair<ll,ll> prob[n+10];
        ll easy=0;

        for_(i,0,n)
        {

            cin>>prob[i].ff;
            if(prob[i].ff==0)easy++;
        }
        for_(i,0,n)
        {

            cin>>prob[i].ss;
        }
        sort(prob,prob+n,cmp);
        ll easy_left[n+10];
        ll time[n+10];
        if(prob[0].ff==1){
            time[0]=b;
            easy_left[0]=easy;
        }
        else{
            time[0]=a;
            easy_left[0]=max(easy-1,(ll)0);
        }
        //cout<<time[0]<<" ";


        for_(i,1,n)
        {
            if(prob[i].ff==1)
            {
                time[i]=time[i-1]+b;
                easy_left[i]=easy_left[i-1];
            }
            else
            {
                time[i]=time[i-1]+a;
                easy_left[i]=max(easy_left[i-1]-1,(ll)0);
            }
           // cout<<time[i]<<" ";
        }
       // cout<<endl;
        ll ans=0;
        for_(i,0,n-1)
        {
            if(time[i]<=t&&time[i]<prob[i+1].ss)
            {
                ll x=i+1 + max(min((prob[i+1].ss-time[i]-1)/a,easy_left[i]),(ll)0);
                ans=max(ans,x);
            }

        }
        if(time[n-1]<=t)
        {
            ans=n;
        }
    //    cout<<ans<<" "<<easy<<_endl;
       // if(ans!=0&&easy_left[ans-1]>0)
           // ans+=max(min((prob[ans].ss-1)/a,easy_left[ans-1]),(ll)0);
        ll cs1;
        if(easy>0)
             cs1=max(min((prob[0].ss-1)/a,easy),(ll)0);
        ans=max(ans,cs1);
        cout<<ans<<_endl;
    }
}




























