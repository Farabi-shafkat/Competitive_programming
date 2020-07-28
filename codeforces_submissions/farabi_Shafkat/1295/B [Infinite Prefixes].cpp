
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


using namespace __gnu_pbds;
#define ordered_set tree<pair<ll,ll> , null_type,less<pair<long long,long long >  >, rb_tree_tag,tree_order_statistics_node_update>

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
ll sum[TEN6];
int main()
{
    FAST;
    ll t;
    cin>>t;
    string str;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        cin>>str;
        all_set(sum,0);
       // map<ll,bool>mp;
        for_(i,0,n)
        {
            if(str[i]=='0')
            {
                sum[i]=sum[i-1]+1;
               // mp[sum[i]]=1;
            }
            else
            {
                sum[i]=sum[i-1]-1;
               // mp[sum[i]]=1;
            }
            //cout<<sum[i]<<" s"<<_endl;
        }
        ll gain=sum[n-1];
        ll tt;
        if(gain!=0)
        {
            tt=(x/gain)-1;
        }
        else tt=0;
        // cout<<" tt "<<tt<<_endl;
        ll ans=0;

        if(gain!=0)
        {
            for_(i,0,n)
            {
                ll el=sum[i];
                ll tr=(x-el)/gain;
                if((x-el)%gain==0&&tr>=0)
                {
              //  cout<<tr<<"  trrr  "<<_endl;
                   ans++;
                }

            }
            //ans=mp.size();
        }
        else
        {
            for_(i,0,n)
            {
                ll el=sum[i];
                if(el==x)
                    ans=1;

            }
        }

        if(ans!=0&&gain==0)
        {
            cout<<-1<<_endl;
            continue;
        }
        if(x==0)ans++;
        cout<<ans<<_endl;
    }



}










































