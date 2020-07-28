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

#define ordered_set tree<pll , null_type,less<pll >, rb_tree_tag,tree_order_statistics_node_update>

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
void sieve(vector<ll> &primes,ll up_lim)
{
    // fills vector primes with primes upto up_lim (inclusive)
    bool is_prim[up_lim+1];
    all_set(is_prim,0);
    for(ll i=2; i<=up_lim; i++)
    {
        if(!is_prim[i])
        {
            primes.pb(i);
            if(i*i>up_lim)continue;
            for(ll j=i+i; j<=up_lim; j+=i)
            {
                is_prim[j]=1;
            }
        }

    }
    return;
}

//bool vis[51][51];
string arr[12];
ll dp[12][30][1<<11];
pair<pll,ll> par[12][30][1<<11];
ll n,m;
bool rec(ll pos,ll al,ll mask)
{

    if(pos>=m)return 1;
    if(al>=26)return 0;

    if(dp[pos][al][mask]!=-1)return dp[pos][al][mask];
    bool d=1;
    ll new_mask=mask;
    for_(i,0,n)
    {
        char c= al+'a';
        if(((mask>>i)&1) and arr[i][pos]!=c)
        {
            d=0;
            break;
        }
        else if(!((mask>>i)&1) and arr[i][pos]!=c)
        {
            //   cout<<new_mask<<" s "<<mask<<" "<<i<<_endl;
            new_mask= new_mask |(1<<i);
        }

    }
    if(d)
    {

        d= rec(pos+1,0,new_mask);
        if(d)
        {
            par[pos][al][mask]= {{pos+1,0},new_mask};
            return dp[pos][al][mask]=d;
        }
    }
    d= d|rec(pos,al+1,mask);

    par[pos][al][mask]= {{pos,al+1},mask};

    return dp[pos][al][mask]=d;




}
void print_path(ll pos,ll al,ll mask)
{
    auto  p = par[pos][al][mask];
    ll pos1=p.ff.ff;
    ll al1=p.ff.ss;
    ll mask1=p.ss;
   // cout<<pos<<" "<<al<<" "<<mask<<_endl;
    if(pos1==pos+1  )
    {
        char c= al+'a';
        cout<<c;
    }
    if(pos1==-1 or al1==-1 or mask==-1)return;
    print_path(pos1,al1,mask1);
}
int main()
{
    //
     FAST;

    // t =10;
    // what_is(t);
    // vector<ll>primes;
    // sieve(primes,40000);
    ll t;
    cin>>t;
    // char arr[11][11];
    for_(cs,1,t+1)
    {

       // what_is(cs);
        cin>>n>>m;


        for_(i,0,n)
        {
            cin>>arr[i];

        }
        all_set(dp,-1);
        all_set(par,-1);
        bool b=rec(0,0,0);
        if(b==0)
            cout<<-1<<_endl;
        else
        {
            print_path(0,0,0);
            cout<<_endl;

        }



    }



}













