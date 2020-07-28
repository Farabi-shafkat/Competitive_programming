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




string arr[2000+10];
map<string,ll>mp;
string rmp[10];
ll dif_no(string s)
{
    ll mn=INF;
    for(auto el:mp)
    {
        ll an=0;
        string s1=el.ff;
        for_(i,0,s.size())
        {
            if(s[i]!=s1[i])an++;

        }
        mn=min(mn,an);
    }
    return mn;

}
ll dif_2(string org,string can)
{
    ll an=0;
    for_(i,0,org.size())
    {
        if(org[i]=='0' and can[i]=='1')an++;
        if(org[i]=='1' and can[i]=='0'){an=INF;return an;}
    }
    return an;
}
//ll dif2[10][10];
ll dp[2010][2010];
ll n;
pll par[2010][2010];
ll rec(ll pos,ll k)
{
    //cout<<pos<<" ss "<<k<<_endl;
    if(k<0)return -2;
   // cout<<" did not return \n";
    if(pos==n and k!=0) return -2;
    else if(pos==n and k==0) return 0;
    if(dp[pos][k]!=-1)return dp[pos][k];
    string dig=arr[pos];
    ll ret=-1;
   // cout<<pos<<" "<<k<<_endl;
    for_(i,10,0)
    {

        ll dif = dif_2(dig,rmp[i]);
        // cout<<dig<<" "<<i<<" "<<dif<<_endl;
       //  cout<<dig<<" "<<rmp[i]<<_endl;
        ll can_do = rec(pos+1,k-dif);
        if(can_do!=-2)
        {
            par[pos][k]={pos+1,k-dif};
            dp[pos][k]=i;
            return i;
        }
    }
    return dp[pos][k]=-2;

}
void print_path(ll pos,ll k)
{
    if(pos==-1 and k==-1)return;
    if(pos==n and k==0)return;
    //cout<<k<<" "<<dif_2(arr[pos],rmp[dp[pos][k]])<<" "<<arr[pos]<<" "<<rmp[dp[pos][k]]<<"\n";
    cout<<dp[pos][k];

    print_path(par[pos][k].ff,par[pos][k].ss);
    return;

}
int main()
{
    FAST;
    ll k;
    cin>>n>>k;
    all_set(dp,-1);
    all_set(par,-1);
    ll k1=k;
    for_(i,0,n)
    {
        //string s;
        cin>>arr[i];


    }
    mp["1110111"]=0;
    mp["0010010"]=1;
    mp["1011101"]=2;
    mp["1011011"]=3;
    mp["0111010"]=4;
    mp["1101011"]=5;
    mp["1101111"]=6;
    mp["1010010"]=7;
    mp["1111111"]=8;
    mp["1111011"]=9;
    for(auto el:mp)
    {
        rmp[el.ss]=el.ff;
    }
//    for_(i,0,10)
//    {
//        for_(j,0,10)
//        {
//            dif2[i][j]=dif_2(rmp[i],rmp[j]);
//        }
//    }
    ll pos=rec(0,k);
    if(pos==-2)
    {
        cout<<-1<<_endl;
    }
    else
        print_path(0,k);


}




























