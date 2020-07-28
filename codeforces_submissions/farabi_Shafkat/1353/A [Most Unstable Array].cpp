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
pair<pll, ll>extended_gcd(ll a,ll b)
{
    // return {(x,y),gcd } where x*a+y*b = gcd
    if (b == 0)
        return{ {1,0},a};
    auto ret = extended_gcd(b, a % b);
    return{{ret.ff.ss,ret.ff.ff-(a/b)*ret.ff.ss},ret.ss};

}
void sieve(vector<ll> &primes,ll up_lim)
{
    // fills vector primes with primes upto up_lim (inclusive)
    bool is_prim[up_lim+1];
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
bool millerRabin_is_prime(ll n)
{
    ll s=0;
    ll d=n-1;
    while(d%2==0)
    {
        s++;
        d=d>>1;
    }
    ll ch [] = {2,7,61}; // {2,3,5,7,11,13,17,19,23,29,31,37} <<for upto 2 ^64
    for_(i,0,3)//12
    {
        ll p=d;
        bool f=1;
        for_(j,0,s)
        {
            ll x= BMod(ch[i],p,n);
            if(x ==1 or x==n-1)
            {
                f = 0;
                break;
            }
            p = p<<1;
        }
        if(f)
        {
            return 0;
        }

    }
    return 1;

}
ll my_abs(ll x)
{
    if(x<0) x= x*-1;
    return x;
}

int main()
{
    //FAST;

    ll t;
    // t =10;
    // what_is(t);
    cin>>t;
    for_(cs,1,t+1)
    {
        ll n,m;
        cin>>n>>m;
        if(n>2)
        {
            cout<<m*2<<_endl;

        }
        else if(n==2)
        {
            cout<<m<<_endl;

        }
        else if(n==1)
        {
            cout<<0<<_endl;

        }

    }


}













