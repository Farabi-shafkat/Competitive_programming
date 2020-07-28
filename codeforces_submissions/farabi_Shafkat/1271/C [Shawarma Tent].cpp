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
#define ipv pair<ll,vector<ll> >
#define pll pair<ll,ll>
#define CASE(x) "Case "<<x<<": "
#define _endl "\n"
#define max3(a,b,c) max(a,max(b,c))
#define max4(a,b,c,d) max(a,max3(d,b,c))
#define min3(a,b,c) min(a,min(b,c))
#define debug(x) cout<<"DEBUG  "<<x<<" \n"
#define for_(i,st,lim) for(i=st;i<lim;i++)
#define fRead(x) freopen(x,"r",stdin)
#define fWrite(x) freopen (x,"w",stdout)
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
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
bool cmpdesc(ll a,ll b)
{
    return a>b;
}
ll my_abs(ll a)
{
    if(a<0)a*=-1;
    return a;
}
bool check(string str)
{
    ll i;
    map<char,int>mp;
    for_(i,0,str.size())
    {
        mp[str[i]]++;

    }
    if(mp.size()==1)
    {
        return 1;
    }
    return 0;
}
char inv(char c)
{
    if(c=='W')return 'B';
    else return 'W';
}
pair<ll,ll>stud[2*TEN5+100];
int main()
{

    ll n,sx,sy;
    cin>>n>>sx>>sy;
    ll i;
    for_(i,0,n)
    {
        cin>>stud[i].ff>>stud[i].ss;

    }
    ll u=0,d=0,r=0,l=0;
    for_(i,0,n)
    {
        if(stud[i].ff>sx)r++;
        else if(stud[i].ff<sx)l++;
        if(stud[i].ss>sy)u++;
        else if(stud[i].ss<sy)d++;
    }
    ll mx=max4(r,l,u,d);
    if(mx==r)
    {
        cout<<r<<_endl;
        cout<<sx+1<<" "<<sy<<_endl;
    }
    else if(mx==l)
    {
        cout<<l<<_endl;
        cout<<sx-1<<" "<<sy<<_endl;
    }
    else if(mx==u)
    {
        cout<<u<<_endl;
        cout<<sx<<" "<<sy+1<<_endl;
    }
    else if(mx==d)
    {
        cout<<d<<_endl;
        cout<<sx<<" "<<sy-1<<_endl;
    }



}
