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
#define pf push_front

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

ll arr[TEN6 +10];

vector<ll>primes;
void sieve()
{
    bool is_prim[2 *(TEN5) +10];
    all_set(is_prim,0);
    for(ll i=2; i<=2 *(TEN5); i++)
    {
        if(!is_prim[i])
        {
            for(ll j=i+i; j<=2 *(TEN5); j+=i)
            {
                is_prim[j]=1;
            }
            primes.pb(i);
        }

    }


}
int main()
{
    ll n;
    cin>>n;
    ll mx=0;
    for_(i,0,n)
    {

        cin>>arr[i];
        mx=max(arr[i],mx);
    }
    ll ans=1;
    sieve();
    for(ll p:primes)
    {
        if(p > mx)break;

        ll num=n-1;
        while(num>=n-1)
        {
            num=0;
            ll nope=0;
            for_(i,0,n)
            {
                if(arr[i]%p==0)
                {
                    num++;
                }
                else
                {

                    nope++;
                    if(nope==2)break;
                }


            }
            if(num>=n-1)
            {
                for_(i,0,n)
                {
                    if(arr[i]%p==0)
                    {
                        arr[i]=arr[i]/p;

                    }

                }
                ans*=p;

            }

        }

    }
    cout<<ans<<_endl;


}













