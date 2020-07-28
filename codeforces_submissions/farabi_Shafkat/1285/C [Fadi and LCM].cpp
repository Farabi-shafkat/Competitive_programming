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
#define ull unsigned long long
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define FAST cin.tie(0); ios_base::sync_with_stdio (false)
#define pii pair<int,int>
#define TEN6 1000000
#define TEN5 100000
#define TEN7 10000000
#define TEN8 100000000
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
ull gcd(ull a, ull b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}
ull lcm(ull a,ull b)
{
    return a*b/gcd(a,b);
}
int main()
{
    FAST;
   ull x;
    ull a,b;
    scanf("%lld",&x);
  //  cout<<lcm(10,12)<<endl;
   // cout<<x<<endl;
    ull mn=x;
    ull mna=1,mnb=x;
    ll mx=0;
    for(a=1;a<=TEN6;a++)
    {

        if(x%a!=0)continue;
        b=x/a;
     //   cout<<a<<" "<<b<<" "<<a*a<<" "<<x<<endl;;
        if(lcm(a,b)==x)
        {
            if(a>b)
                mx=a;
            else
                mx=b;
             //   cout<<mx<<" max"<<endl;
            if(mx<mn)
            {
                mna=a;
                mnb=b;
                mn=mx;
            }

        }
    }
 //   cout<<a<<" "<<b<<" "<<a*a<<" "<<x<<endl;;
  //  cout<<mna<<" "<<mnb<<_endl;
    printf("%lld %lld",mna,mnb);
   // main();
}


