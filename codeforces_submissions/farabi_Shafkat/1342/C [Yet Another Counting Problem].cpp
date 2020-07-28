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

ll pre[4*(TEN6)];
int main()
{
    //FAST;

    ll t;
    // t =10;
    // what_is(t);
    cin>>t;

    //scanf("%lld",&t);

    for_(cs,1,t+1)
    {
        ll a,b,q;
        cin>>a>>b>>q;
        ll p=lcm(a,b);
        all_set(pre,0);
        pre[0]=((p%a)%b != (p%b)%a);
        for_(i,1,p)
        {
            if((i%a)%b != (i%b)%a)
                pre[i]=pre[i-1]+1;
            else
                pre[i]=pre[i-1];
            //cout<<i<<" "<<pre[i]<<_endl;
        }
        //pre[p]++;
        while(q--)
        {
            ll l,r;
            cin>>l>>r;
            ll ans=0;
            ans+=pre[p-1]-pre[(l-1)%p];
            //cout<<ans<<" ss1"<<_endl;
            ans+=pre[r%p];
            //cout<<ans<<" ss2"<<_endl;
            if(l%p!=0)
                l=l+(p-(l%p));
            if(r%p!=0)
                r=r-(r%p);
            ans+= (r-l)/p *pre[p-1];


            cout<<ans<<" ";

        }
        cout<<_endl;
    }



}
