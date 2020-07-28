/*


               BASIC TEMPLATES


*/
#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops")
#pragma GCC target("avx,avx2")

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
#define unique_all(div) sort( div.begin(), div.end() );div.erase( unique( div.begin(), div.end() ), div.end() );
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




string s;
ll n;
ll cnt_arr[100][131072 + 100];
ll find_max_cnt(ll l,ll r,ll x)
{
    //cout<<l<<" "<<r<<_endl;
    if(x>'z'-'a')return 0;
    ll mx=0;
    char c=-1;

    ll cn;
    if(l!=0)
    {
        cn = cnt_arr[x][r]-cnt_arr[x][l-1];
    }
    else cn =cnt_arr[x][r];

    // cout<<" rert "<<mx<<_endl;
    return  cn;

}

ll solve(ll l,ll r,char ch)
{

    if(l==r)
    {
        if(s[l]==ch)return 0;
        else return 1;


    }
    ll mid = (l+r)/2;
    ll sz = r-l+1;



    ll cnl_pr = find_max_cnt(mid+1,r,ch-'a');
    ll cnr_pr = find_max_cnt(l,mid,ch-'a');

    // ll ret1=INF,ret2=INF;

        ll cnl = solve(l,mid,ch+1);
        ll cnr = solve(mid+1,r,ch+1);
        ll ret1= cnl + sz/2 -cnl_pr;
        ll ret2 = cnr + sz/2 -cnr_pr;
        return min(ret1,ret2);

}

int main()
{
    FAST;


    ll t;
    cin>>t;
    for_(cs,1,t+1)
    {

        cin>>n;
        cin>>s;

      //  all_set(cnt_arr,0);
        for_(i,0,n)
        {

            if(i==0)
            {
                for_(c,0,27)
                {
                    cnt_arr[c][i] = 0;

                }
                cnt_arr[s[i]-'a'][i]=1;

            }
            else
            {
                for_(c,0,27)
                {
                    cnt_arr[c][i] = cnt_arr[c][i-1];

                }
                cnt_arr[s[i]-'a'][i] = cnt_arr[s[i]-'a'][i-1]+1;

            }

        }
        //  cout<<find_max_cnt(4,n-1)<<" sds "<<_endl;;
        ll ans = solve(0,n-1,'a');
        cout<<ans<<_endl;



    }

}













