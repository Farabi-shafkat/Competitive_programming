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


int main()
{
    FAST;
    ll q;
    cin>>q;
    while(q--)
    {
        string s;
        cin>>s;
        ll i;
        map<char,ll>mp;
        for_(i,0,s.size())
        {
            mp[s[i]]++;
        }
        mp['U']=min(mp['U'],mp['D']);
        mp['D']=mp['U'];
        mp['L']=min(mp['L'],mp['R']);
        mp['R']=mp['L'];
        if(mp['L']==0)
        {
            mp['U']=min(mp['U'],(ll)1);
        }
        mp['D']=mp['U'];
        if(mp['U']==0)
        {
            mp['L']=min(mp['L'],(ll)1);
        }
        mp['R']=mp['L'];
        cout<<mp['U']*2+mp['L']*2<<_endl;
        while(mp['U']>0)
        {
            cout<<"U";
            mp['U']--;
        }
        while(mp['L']>0)
        {
            cout<<"L";
            mp['L']--;
        }
        while(mp['D']>0)
        {
            cout<<"D";
            mp['D']--;
        }
        while(mp['R']>0)
        {
            cout<<"R";
            mp['R']--;
        }
        cout<<_endl;
    }
}








































