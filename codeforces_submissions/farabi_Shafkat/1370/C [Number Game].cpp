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
bool cmp(ll a,ll b)
{
    return (a|b)-b > (a|b)-a;

}
bool is_prim[40001+100];
void sieve(vector<ll> &primes,ll up_lim)
{
    // fills vector primes with primes upto up_lim (inclusive)

    all_set(is_prim,0);
    for(ll i=2; i<=up_lim; i++)
    {
        if(!is_prim[i])
        {
            primes.pb(i);
            //  if(i*i>up_lim)continue;
            for(ll j=i+i; j<=up_lim; j+=i)
            {
                is_prim[j]=1;
            }
        }

    }
    return;
}
vector<ll>primes;
bool chk(ll n)
{
    if(n<40001)
        return is_prim[n]==1;
    for(ll p:primes)
    {
        if(p*p>n)break;
        if(n%p==0)return true;
    }
    return false;
}
ll play(ll n)
{
    if(n==1)return 0;
    if(n==2)return 1;
    ll num=n;
    ll d = 1;
    while(n%2==0)
    {
        n/=2;
        d*=2;
    }
   // cout<<n<<" "<<d<<_endl;
    if(n==1)
    {
        return 1+play(num-1);

    }
    else
    {
        if(d==2 and chk(n))
            return 1;
       // cout<<d<<" "<<chk(n)<<_endl;
        return 1+play(d);
    }


}
int main()
{
    FAST;

    ll t;
    cin>>t;

    sieve(primes,40001);
    for_(cs,1,t+1)
    {
        ll n;
        cin>>n;
        ll cnt = play(n);
        if(cnt%2==1)
        {
            cout<<"Ashishgup\n";
        }
        else
            cout<<"FastestFinger\n";
    }

}




















