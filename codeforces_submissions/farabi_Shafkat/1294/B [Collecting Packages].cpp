
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
bool cmp(pll a,pll b)
{
    if(a.ff==b.ff)
    {
        return a.ss<b.ss;
    }
    else
        return a.ff<b.ff;
}
int main()
{
    FAST;
    ll t;
    cin>>t;
    while(t--)
    {

        ll n;
        cin>>n;
        pll gr[n+2];
        for_(i,0,n)
        {
            cin>>gr[i].ff>>gr[i].ss;

        }
        gr[n]={0,0};
        sort(gr,gr+(n+1),cmp);
        bool b=1;
        for_(i,1,n+1)
        {
            if(gr[i].ff>gr[i-1].ff&&gr[i].ss<gr[i-1].ss)
            {
                b=0;
                break;
            }
        }
        if(!b)
        {
            cout<<"NO\n";
            continue;
        }
        string s="";
       // cout<< (int)'U'<<(int)'R'<<endl;

        for_(i,1,n+1)
        {
            //cout<<gr[i].ff<<" "<<gr[i].ss<<_endl;
             while(gr[i].ff>gr[i-1].ff)
            {
               // cout<<gr[i-1].ff<<" s "<<gr[i-1].ss<<_endl;
                gr[i-1].ff++;
                s+='R';
            }
            while(gr[i].ss>gr[i-1].ss){
               // cout<<gr[i-1].ff<<" s "<<gr[i-1].ss<<_endl;
                gr[i-1].ss++;
                s+='U';
            }


        }
        cout<<"YES\n";
        cout<<s<<_endl;
    }



}



























