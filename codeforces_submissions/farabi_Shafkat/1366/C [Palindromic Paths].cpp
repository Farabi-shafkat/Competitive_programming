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
#define INF 5e17


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
ll n,m;
ll mat[31][31];
ll dis[31][31];
bool vis[31][31];
ll dis_map0[1000];
ll dis_map1[1000];
void dfs(ll i,ll j)
{
    if(vis[i][j]==1)
    {
        return;
    }
    vis[i][j]=1;
    if(i+1<n)
    {
        dis[i+1][j]= dis[i][j]+1;
        dfs(i+1,j);
    }
    if(j+1<m)
    {
        dis[i][j+1]= dis[i][j]+1;
        dfs(i,j+1);
    }
    return;

}
int main()
{
    FAST;
    ll t;
    cin>>t;



    while(t--)
    {
        cin>>n>>m;
        for_(i,0,n)
        {
            for_(j,0,m)
            {
                cin>>mat[i][j];
            }
        }
        all_set(dis,0);
        all_set(vis,0);
        all_set(dis_map1,0);
        all_set(dis_map0,0);

        dfs(0,0);
        ll mx=0;
        for_(i,0,n)
        {
            for_(j,0,m)
            {
                if(mat[i][j]==0)dis_map0[dis[i][j]]++;
                else if(mat[i][j]==1)dis_map1[dis[i][j]]++;
                mx = max(mx,dis[i][j]);
            }
        }
        ll an=0;
        for_(i,0,(mx+1)/2)
        {

            ll j = mx-i;
          //  cout<<i<<" "<<j<<_endl;
            if(i==j)continue;
            an+=min(dis_map0[i]+dis_map0[j],dis_map1[i]+dis_map1[j]);
        }
        cout<<an<<_endl;
    }



}










/*
3
4 1 13


*/












