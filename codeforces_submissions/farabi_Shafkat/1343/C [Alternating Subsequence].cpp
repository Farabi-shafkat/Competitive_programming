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







int main()
{
    FAST;

    ll t;
    // t =10;
    // what_is(t);
    cin>>t;

    //scanf("%lld",&t);
    for_(cs,1,t+1)
    {
        ll n;
        cin>>n;

        ll arr[n+2];
        set<ll> pos[n+20];
        set<ll> neg[n+20];
        for_(i,0,n)
        {
            cin>>arr[i];
        }
        ll p=0,ng=0;
        if(arr[0]>0)pos[p].insert(arr[0]);
        else neg[ng].insert(arr[0]);
        for_(i,1,n)
        {
           // cout<<p<<" "<<ng<<_endl;
            if(arr[i]>0)
            {
                if(arr[i-1]>0)
                {
                    pos[p].insert(arr[i]);
                }
                else
                {
                    //ng++;
                    p++;
                    pos[p].insert(arr[i]);

                }

            }
            else
            {
                if(arr[i-1]<0)
                {
                    neg[ng].insert(arr[i]);
                }
                else
                {
                    ng++;
                   // p++;
                    neg[ng].insert(arr[i]);
                   // cout<<ng<<" ss"<<_endl;
                }


            }

        }
        ll sum=0;
        for_(i,0,p+2)
        {
            if(pos[i].size()==0)continue;;
            //cout<<(*pos[i].rbegin())<<_endl;
            sum+=(*pos[i].rbegin());

        }
        for_(i,0,ng+2)
        {
            if(neg[i].size()==0)continue;
          //  cout<<(*neg[i].rbegin())<<_endl;
            sum+=(*neg[i].rbegin());

        }
        cout<<sum<<_endl;
    }



}















