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
#define for_(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

//lower_bound returns an iterator pointing to the first element in the range [first,last) which has a value not less than ‘val’.

//upper_bound returns an iterator pointing to the first element in the range [first,last) which has a value greater than ‘val’.
using namespace __gnu_pbds;
#define ordered_set tree<ll , null_type,less<ll  >, rb_tree_tag,tree_order_statistics_node_update>

#define MOD 998244353 ///////<<<<<<<<<<<<<<<<<<=====MOD value change here!!!!!
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




int run_sum[202][2*(TEN5)+10];
ll calc(ll c,ll i,ll j)
{
    if(i==0)return run_sum[c][j];

    return run_sum[c][j]-run_sum[c][i-1];
}
ll arr[(2*TEN5)+10];
int main()
{
   //FAST;
    ll t;
   // cin>>t;
    scanf("%lld",&t);
    for_(cs,1,t+1)
    {
        ll n;

        scanf("%lld",&n);


        vector<ll> pos[201];
       // all_set(run_sum,0);
        for_(i,0,n)
        {

            scanf("%lld",&arr[i]);
            pos[arr[i]].emplace_back(i);
        }
        if(n==1)
        {
            printf("1\n");
            continue;

        }
        for_(i,1,201)
        {
            if(arr[0]==i)
                run_sum[i][0]=1;
            else
                run_sum[i][0]=0;
            for_(j,1,n)
            {
                if(arr[j]==i)
                {
                    run_sum[i][j]=run_sum[i][j-1]+1;
                }
                else
                    run_sum[i][j]=run_sum[i][j-1];

            }
        }
        ll ans=1;
        for_(c1,1,201)
        {
            ll sz=pos[c1].size();
            for_(i,0,(sz>>1))
            {
                ll l=pos[c1][i];
                ll r=pos[c1][sz-1-i];
                if(l>=r)
                {
                    break;
                }

                ll mx=0;
                for_(c2,1,201)
                    mx=max(mx,calc(c2,l+1,r-1));
                ll total = 2*(i+1)+mx;
                ans=max(ans,total);
            }


        }


        printf("%lld\n",ans);

    }



}















