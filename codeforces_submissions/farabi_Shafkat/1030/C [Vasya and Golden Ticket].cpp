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

ll my_abs(ll x)
{

    if(x<0)return -1*x;
    return x;
}
bool is_less(string bg,string lss)
{
    if(lss.size()==bg.size())
    {
        return lss<=bg;

    }
    return lss.size()<bg.size();

}
int main()
{

    ll n;
    cin>>n;
    ll arr[n+10];
    string inp;
    cin>>inp;
    ll in=0;
    for_(i,0,n)
    {
        if(inp[i]=='0')
            continue;
        arr[in]=inp[i]-'0';
        in++;

    }
    if(in==0)
    {
        cout<<"YES\n";
        return 0;
    }
    n=in;
    vector<pair<pll,string> > sum[910];
    for_(i,0,n)
    {
        ll sm=0;
        string s="";
        for_(j,i,n)
        {

            sm+=arr[j];
            s+=(arr[j]+'0');
            sum[sm].pb({{i,j},s});

        }
    }
    bool f=0;
    for_(i,0,901)
    {
        sort(all(sum[i]));
        ll last=-1;
        string last_st="";
       // cout<<"sum "<<i<<" "<<_endl;;
        for(pair<pll,string> x:sum[i])
        {
           // cout<<x.ff.ff<<" "<<x.ff.ss<<" "<<x.ss<<" "<<last<<_endl;
            if(x.ff.ff==0&&x.ff.ss==n-1)continue;
            if(last==n-1)
            {
               // cout<<"....................";
                f=1;
                break;
            }
            if(x.ff.ff==last+1)
            {
                last=x.ff.ss;
                last_st=x.ss;
            }


        }
        if(last==n-1)
        {
          //  cout<<"....................";
            f=1;
            break;
        }
        if(f)break;


    }
    if(f)
    {
        cout<<"YES\n";
    }
    else
        cout<<"NO\n";

}























