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

#define MOD 1000000007 ///////<<<<<<<<<<<<<<<<<<=====MOD value change here!!!!!
#define INF 0x3f3f3f3f









bool mask[(1<<8)+10];
ll arr[3*TEN5  +10][10];
ll mp[3*TEN5  +10];

int main()
{
    ll n,m;
    ll mx=0;
    cin>>n>>m;
    for_(i,0,n)
    {
        for_(j,0,m)
        {
            cin>>arr[i][j];
            mx=max(mx,arr[i][j]);
        }
    }
    ll low=0;
    ll high=mx;
   // ll mid;
    pll ans;
    ll x;
    vector<ll>in;
    while(low<=high)
    {

        ll mid=(low+high)/2;
       // cout<<low<<" "<<mid<<" "<<high<<_endl;
        all_set(mask,0);
        bool b=0;

        for_(i,0,n)
        {
            ll mas=0;
            for_(j,0,m)
            {
                if(arr[i][j]>=mid)
                {
                    mas=mas|(1<<j);
                }
            }
            mp[i]=mas;
            mask[mas]=1;
           // cout<<mas<<_endl;
        }
        for_(i,0,(1<<m))
        {
            if(mask[i]==0)continue;
            for_(j,0,(1<<m))
            {
                if(mask[j]==1)
                {
                    if((i|j)==(1<<m)-1)
                    {
                        b=1;
                        ans={i,j};
                        x=mid;
                        break;
                    }
                }
            }
            if(b)
                break;
        }
        if(b)
        {
            low=mid+1;
            in.clear();
            for_(i,0,n)
            {
                if(mp[i]==ans.ff)
                {
                    in.pb(i);
                    ans.ff=-1;
                }
                if(mp[i]==ans.ss)
                {
                    in.pb(i);
                    ans.ss=-1;
                }
            }
        }
        else
        {
            high=mid-1;
        }
    }
    cout<<in[0]+1<<" "<<in[1]+1<<_endl;


}


















