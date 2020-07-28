/*


               BASIC TEMPLATES


*/
//#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops")
//#pragma GCC target("avx,avx2")

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
#define emb emplace_back
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


#define for_r(i,st,lim) for(ll i=st-1;i>=lim;i--)
#define fRead(x) freopen(x,"r",stdin)
#define fWrite(x) freopen (x,"w",stdout)
#define all_set(arr,val) memset(arr,val,sizeof(arr))
#define all(x) x.begin(),x.end()
#define for_(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

//lower_bound returns an iterator pointing to the first element in the range [first,last) which has a value not less than ‘val’.

//upper_bound returns an iterator pointing to the first element in the range [first,last) which has a value greater than ‘val’.
using namespace __gnu_pbds;
#define ordered_set tree<ll , null_type,less<ll  >, rb_tree_tag,tree_order_statistics_node_update>

#define MOD 998244353 ///////<<<<<<<<<<<<<<<<<<=====MOD value change here!!!!!
#define INF 5e18
#define what_is(x) cerr << #x << " is " << x << endl;

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



ll lcm(ll a,ll b)
{
    return a*b / gcd(a,b);
}

ll my_abs(ll x)
{
    if(x<0) x= x*-1;
    return x;
}
ll ghor[1001][1001]; // 0 = black, can north    1= white ,cant north
bool vis[1001][1001];
ll n,m;
void dfs(ll i,ll j)
{
    if(i>=n or j>=m or i<0 or j<0 )return;
    if(vis[i][j]==1 or ghor[i][j]==1)return;
    vis[i][j]=1;
    dfs(i,j+1);
    dfs(i+1,j);
    dfs(i,j-1);
    dfs(i-1,j);
    return;

}
int main()
{
    //FAST;

    //ll t;
    // t =10;
    // what_is(t);
   // cin>>t;


  //  for_(cs,1,t+1)
  //  {

    cin>>n>>m;
    ll total=0;
    for_(i,0,n)
    {
        string str;
        cin>>str;
        for_(j,0,m)
        {
            ghor[i][j]=(str[j]=='.');
            total+= (str[j]=='#');
        }
    }

  //  }
    if(n==1 or m==1)
    {
        if(total == n*m)
        {
            cout<<1<<_endl;
        }
        else if(total==0)
        {
            cout<<0<<_endl;
        }
        else
            cout<<-1<<_endl;
        return 0;
    }
    bool f=1;
    bool all_w_r=0,all_w_c=0;
    for_(i,0,n)
    {
        bool bef=0;
        if(ghor[i][0]==0)bef=1;
        for_(j,1,m)
        {
           // cout<<ghor[i][j]<<" \n"[j==m-1];
            if(ghor[i][j]==0 and ghor[i][j-1]==1)
            {
                if(!bef)bef=1;
                else
                {
                    f=0;
                    break;
                }
            }

        }
        if(bef==0)
            all_w_r=1;

    }

    for_(j,0,m)
    {
        bool bef=0;
        if(ghor[0][j]==0)bef=1;
        for_(i,1,n)
        {
            if(ghor[i][j]==0 and ghor[i-1][j]==1)
            {
                if(!bef)bef=1;
                else
                {
                    f=0;
                    break;
                }
            }

        }
        if(bef==0)
            all_w_c=1;

    }

   // cout<<all_w_r<<" "<<all_w_c<<_endl;
    if(all_w_r!=all_w_c)f=0;
    if(!f)
    {
        cout<<-1<<_endl;
        return 0;
    }
    all_set(vis,0);
    ll ans=0;
    for_(i,0,n)
    {
        for_(j,0,m)
        {

            if(vis[i][j]==0 and ghor[i][j]==0)
            {
                dfs(i,j);
                ans++;
            }

        }


    }
    cout<<ans<<_endl;


}












