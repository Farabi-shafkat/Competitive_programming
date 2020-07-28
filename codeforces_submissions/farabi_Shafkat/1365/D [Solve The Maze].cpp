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
#define TEN7 10000000
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

#define ordered_set tree<ll , null_type,less<ll >, rb_tree_tag,tree_order_statistics_node_update>

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
ll my_abs(ll x)
{
    if(x<0) x= x*-1;
    return x;
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

ll n,m;
char arr[51][51];
ll dx[] = {0,0,-1,1};
ll dy[] = {1,-1,0,0};
void block(ll i,ll j)
{
    for_(x,0,4)
    {

        ll nx = i+dx[x];
        ll ny = j+dy[x];
        if(nx>=0 and nx<n and ny>=0 and ny<m and arr[nx][ny]=='.')
        {
            arr[nx][ny]='#';
        }

    }
    return;
}
bool vis[51][51];
void dfs(ll i,ll j)
{
    if(vis[i][j]==true )return;
    if(arr[i][j]=='#')return;
    vis[i][j]=true;
    //what_is(i);
   // what_is(j);
    for_(x,0,4)
    {

        ll nx = i+dx[x];
        ll ny = j+dy[x];
       // what_is(nx);
       // what_is(ny);

        if(nx>=0 and nx<n and ny>=0 and ny<m and arr[nx][ny]!='#')
        {
            dfs(nx,ny);
        }

    }
    return;
}
int main()
{
     //FAST;

    ll t;
    cin>>t;
    for_(cs,1,t+1)
    {

        cin>>n>>m;
        for_(i,0,n)
        {
            string s;
            cin>>s;
            for_(j,0,m)
            {
                arr[i][j]=s[j];
            }

        }
        for_(i,0,n)
        {
            for_(j,0,m)
            {
                if(arr[i][j]=='B')
                {

                    block(i,j);

                }

            }

        }
        all_set(vis,0);

        dfs(n-1,m-1);
        bool done=true;
        for_(i,0,n)
        {
            for_(j,0,m)
            {
                //cout<<arr[i][j]<<" "<<vis[i][j]<<_endl;
                if(arr[i][j]=='G')
                    done = done & ( vis[i][j]==true);
                else if(arr[i][j]=='B')
                    done = done & ( vis[i][j]==false);
            }
        }
        if(done)
        {
            cout<<"Yes\n";

        }
        else
            cout<<"No\n";
    }



}













