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
#define ordered_set tree<ll , null_type,less<ll  >, rb_tree_tag,tree_order_statistics_node_update>

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




vector<ll>graph[4002];
ll val[4002];
ll asgn[4002];
ordered_set st;
bool y=1;
ll dfs(ll node)
{
    //if(val[node]!=0)
    // {
    ll ret=0;
    if(st.size()<graph[node].size()+1)
    {
        cout<<"NO\n";
        exit(0);
    }
    auto it=(st.find_by_order(val[node]));
    if(it==st.end())
    {
        cout<<"NO\n";
        exit(0);
    }
    asgn[node]=*it;
    //cout<<node<<" "<<asgn[node]<<" s "<<val[node]<<_endl;
    st.erase(asgn[node]);
    // }
    // cout<<graph[node].size()<<" size"<<_endl;

    for_(i,0,graph[node].size())
    {
        ll &child=graph[node][i];
        ret+=dfs(child);
    }
    if(ret<val[node])
    {
        cout<<"NO\n";
        exit(0);
    }
    return ret+1;
}
//bool chk(i,c)
int main()
{
    ll n;
    cin>>n;
    ll root;
    for_(i,1,n+1)
    {
        ll p,c;
        cin>>p>>c;
        graph[p].pb(i);
        if(p==0)root=i;
        val[i]=c;

    }
//    for_(i,1,n+1)
//    {
//        chk(i,c);
//
//    }
    for_(i,1,n+1)
    {
        st.insert(i);
    }
    ll s= dfs(root);
    if(y==1&&s<val[root])y=0;
    if(!y)
    {
        cout<<"NO\n";
        return 0;
    }
    cout<<"YES\n";
    for_(i,1,n+1)
    {
        cout<<asgn[i]<<" ";
    }
    cout<<_endl;

}

















