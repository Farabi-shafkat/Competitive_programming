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
#define INF 0x3f3f3f3f


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




ll arr[TEN4];
ll n;
ll dp[101][101][101][2];
ll rec(ll pos,ll even,ll odd,ll is_odd)
{
    if(dp[pos][even][odd][is_odd]!=-1)return dp[pos][even][odd][is_odd];
   // cout<<pos<<" "<<odd<<" "<<even<<" "<<is_odd<<_endl;
    if(pos>=n)return 0;
    ll r1=INF,r2=INF ;
    if(pos==0)
    {
        if(arr[pos]!=0)
        {

            r1=rec(pos+1,even,odd,arr[pos]%2);
        //    r2=rec(pos+1,even,odd,arr[pos]%2);
            //if(is_odd!=arr[pos]%2)
              //  return min(r1,r2)+1;
            return dp[pos][even][odd][is_odd]=r1;
        }
        if(even>0)
            r1=rec(pos+1,even-1,odd,0);
        if(odd>0)
            r2=rec(pos+1,even,odd-1,1);
        return dp[pos][even][odd][is_odd]=min(r1,r2);

    }
    if(arr[pos]!=0)
    {

        r1=rec(pos+1,even,odd,arr[pos]%2);
       // r2=rec(pos+1,even,odd,arr[pos]%2);
        if(is_odd!=arr[pos]%2)
            return dp[pos][even][odd][is_odd]=r1+1;
        return dp[pos][even][odd][is_odd]=r1;
    }
    if(even>0)
        r1=rec(pos+1,even-1,odd,0);
    if(odd>0)
        r2=rec(pos+1,even,odd-1,1);
    if(is_odd)
    {
        r1++;
    }
    else
        r2++;
    return dp[pos][even][odd][is_odd]=min(r1,r2);

}
int main()
{
//   ll n;
    cin>>n;
    set<ll> even;
    set<ll> odd;
    for(ll i=2; i<=n; i+=2)
    {
        even.insert(i);
    }
    for(ll i=1; i<=n; i+=2)
    {
        odd.insert(i);
    }

    for_(i,0,n)
    {
        cin>>arr[i];
        if(arr[i]%2)
            odd.erase(arr[i]);
        else
            even.erase(arr[i]);
    }
    all_set(dp,-1);
    //ll com=rec(0,even,odd);
    ll e=even.size();
    ll o=odd.size();
    ll ans=rec(0,e,o,0);
    cout<<ans<<_endl;
}






















