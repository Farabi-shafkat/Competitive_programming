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

#define MOD 1000000007 ///////<<<<<<<<<<<<<<<<<<=====MOD value change here!!!!!
#define INF 0x3f3f3f3f






ll dp[1001][22];
ll n,m;



ll rec(ll num,ll pos)
{
   // cout<<num<<" "<<pos<<_endl;
    if(num>n)return 0;
    if(pos==m+m-1){

            return  dp[num][pos]=(1+rec(num+1,pos))%MOD;
    }

    if(dp[num][pos]!=-1)return dp[num][pos];
    ll ret=(rec(num,pos+1)+rec(num+1,pos))%MOD;
    dp[num][pos]=ret;
    return ret%MOD;
}


int main()
{

    cin>>n>>m;
    all_set(dp,-1);
   // cout<<rec(n,1,0);
    //ll ret=0;
    ll ret= rec(1,0)%MOD;
    cout<<ret<<_endl;



}


















