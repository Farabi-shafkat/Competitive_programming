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
#define INF 5e17


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
ll a,b;
ll calc(ll sw)
{
    ll a1=a,b1=b;

    a1 = a1 - 2*sw;
    b1 = b1 - sw;
    if(a1<0 or b1<0) return -1;
    a1 =max(a1,(ll)0);
    b1 =max(b1,(ll)0);
    ll ret =min(a1,b1/2);
    //if(ret<0)return INF;
    return  ret + sw;

}

//10 100000000 1000000000
int main()
{
    FAST;
    ll t;
    cin>>t;



    while(t--)
    {

        cin>>a>>b;
        if(a<b) swap(a,b);
        ll low= 0;//min(a,b)-1;
        ll high = max(a,b)+1;
        ll mid1,mid2;
//        for_(i,0,100)
//        {
//            cout<<"i "<<i<<" calc "<<" "<<calc(i)<<_endl;
//        }

      //  cout<<calc(min(a,b))<<" Sds"<<_endl;
        while(low<=high)
        {
            ll d= (high-low+1);
            if(d<4) break;
            else d/=3;
            mid1 = low+d;
            mid2=  high-d;
          //  cout<<low<<" "<<mid1<<" "<<mid2<<" "<<high<<" "<<calc(mid1)<<" "<<calc(mid2)<<_endl;;

            if(calc(mid1)>=calc(mid2))
            {
                high = mid2-1;

            }
            else
            {
                low = mid1+1;
            }


        }
        ll mx=0;
      //  cout<<low<<" "<<mid1<<" "<<mid2<<" "<<high<<" "<<calc(mid1)<<" "<<calc(mid2)<<_endl;;
        for_(i,low-10,high+10)
        {
            mx = max(mx, calc(i));
        }
        cout<<mx<<_endl;


    }



}










/*
3
4 1 13


*/












