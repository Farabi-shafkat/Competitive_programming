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
#define for_(i,st,lim) for(ll i=st;i<lim;i++)
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




int main()
{
    FAST;
    ll n;
    cin>>n;
    ll arr[n+10],arr1[n+10];
    for_(i,0,n)
    {
        cin>>arr[i];
        arr1[i]=arr[i];
    }
    sort(arr1,arr1+n);
    ll st=-1;
    ll en=-1;

    for_(i,0,n)
    {
        if(st==-1&&arr[i]!=arr1[i])
        {
            st=i;
            break;
        }

    }
    for(ll i=n-1; i>=0; i--)
    {
        if(en==-1&&arr[i]!=arr1[i])
        {
            en=i;
            break;
        }
    }
    // cout<<st<<" "<<en<<_endl;
    if(st!=-1&&en!=-1)
    {
        for(ll i=st,j=en; i<=j; i++,j--)
        {
            swap(arr[i],arr[j]);

        }
        bool y=1;
        for_(i,0,n)
        {
            if(arr[i]!=arr1[i])
            {
                y=0;
                break;
            }
        }
        if(y)
        {
            cout<<"yes\n";
            cout<<st+1<<" "<<en+1<<_endl;
        }
        else
            cout<<"no\n";
    }
    else
    {
        cout<<"yes\n";
        cout<<1<<" "<<1<<_endl;
    }

}


















