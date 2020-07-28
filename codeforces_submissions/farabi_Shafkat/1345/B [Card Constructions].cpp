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
ll dp[TEN6 +10];
ll cards(ll h)
{
    if(dp[h]!=-1)return dp[h];
    if(h==2)
    {
        return dp[h]=7;
    }
    if(h==1)
    {
        return dp[h]=2;
    }
    return dp[h]=cards(h-1)+h*cards(1)+(h-1);
}
int main()
{
    FAST;

    ll t;
    // t =10;
    // what_is(t);
    cin>>t;
    dp[0]=0;
    all_set(dp,-1);

    for_(i,1,100001)
    {
        //cout<<cards(i)<<" "<<i<<_endl;;
        //o_set(cards(i));
        cards(i);
    }
    for_(cs,1,t+1)
    {
        ll n;
        cin>>n;
        ll low=1;
        ll high=100001;
        ll ans=0;
        ll cnt=0;
        while(n>=2)
        {
            ll mid;
            low=0;
            high=100001;
            while(low<=high)
            {

                mid=(low+high)/2;
              //  cout<<low<<" "<<mid<<" "<<high<<_endl;
                if(dp[mid]==n)
                {
                   // ans=mid;
                    high=mid;
                    break;

                }
                if(dp[mid]>n)
                {
                    high=mid-1;
                   // ans=mid;
                }
                else
                {
                    low=mid+1;
                }
            }
            //cout<<low<<" "<<mid<<" "<<high<<_endl;
           // cout<<high<<" "<<dp[high]<<_endl;
            if(dp[high ]>n)
            {
                n-=dp[high-1];

            }
            else
                n-=dp[high];

           // cout<<n<<" lest"<<_endl;
            cnt++;
        }
        cout<<cnt<<_endl;


    }


}












