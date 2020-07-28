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
#define INF 0x3f3f3f3f
ll arr[TEN5+100];
ll arr1[TEN5+100];
ll arr2[TEN5+100];
map<ll,ll>mp;
ll sum;
ll maxSubArraySum(ll a[], ll size)
{
    ll max_so_far = 0x3f3f3f3f* -1, max_ending_here = 0;

    for (ll i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
        {
            max_so_far = max_ending_here;
            if(max_so_far==sum)
            {
                mp[sum]++;
            }
        }

        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}
int main()
{
    // FAST;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
      //  ll sum=0;
        sum=0;
        all_set(arr,0);
        mp.clear();
        ll i1=0,i2=0;
        for_(i,0,n)
        {

            cin>>arr[i];
            if(i==0)
            {
                arr1[i1]=arr[i];
                i1++;
            }
            else if(i==n-1)
            {
                arr2[i2]=arr[i];
                i2++;
            }
            else
            {
                arr2[i2]=arr[i];
                arr1[i1]=arr[i];
                i1++;
                i2++;
            }

            sum+=arr[i];
        }
        //ll mx=0x3f3f3f3f;
        // mx=mx*-1;
        // ll temp=0;
        // map<ll,ll>mp;
//        for_(i,0,n)
//        {
//            cout<<temp<<" "<<mx<<_endl;
//            temp+=arr[i];
//            mx=max(mx,temp);
//            if(mx==sum)mp[sum]++;
//            temp=max((ll)0,temp);
//        }
        ll mx1=maxSubArraySum(arr1,n-1);
        ll mx2=maxSubArraySum(arr2,n-1);
        ll mx=max(mx1,mx2);
       // cout<<mx<<" maax"<<" "<<sum<<_endl;
        if(mx<sum)
        {
            cout<<"YES\n";
        }

        else
            cout<<"NO\n";
    }
}
