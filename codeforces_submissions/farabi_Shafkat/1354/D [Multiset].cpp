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
#define TEN7 10000000
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

#define ordered_set tree<ll , null_type,less<ll >, rb_tree_tag,tree_order_statistics_node_update>

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
ll my_abs(ll x)
{
    if(x<0) x= x*-1;
    return x;
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
ll lcm(ll a,ll b)
{
    return a*b / gcd(a,b);
}


int BIT1[TEN6+1];

int query(int* BIT ,int idx){
       int sum=0;
       while(idx>0){
             sum+=BIT[idx];
             idx -= idx & (-idx);
       }
       return sum;
}
void update(int* BIT,int idx, int x, int n) //n is the size of the array, x is the number to add
{
       while(idx<=n)
       {
             BIT[idx]+=x;
             idx += idx & (-idx);
       }
}
int find_bit(int* BIT,int k,int sz)
{
    int low=1;
    int high= sz;
    int mid;
    while(low<=high)
    {

        int mid= (low+high)/2;
        int sum = query(BIT,mid);
        if( sum < k)
        {
            low = mid+1;

        }
        else
        {
            high = mid-1;

        }

    }
    return low;
}
int main()
{
     FAST;

    // t =10;
    // what_is(t);

    ll n,q;
    cin>>n>>q;
    for_(i,0,n)
    {
        ll x;
        cin>>x;
        update(BIT1,x,1,TEN6+1);
       // update(BIT2,i+1,1,n)
    }
    for_(i,0,q)
    {
        ll k;
        cin>>k;
        if(k>0)
        {
            update(BIT1,k,1,TEN6+1);
           // update(BIT2,i+n+1,1,n)
        }
        else
        {
            k=k*-1;
            int elm = find_bit(BIT1,k,TEN6+1);
            update(BIT1,elm,-1,TEN6+1);
        }

    }
    bool y=0;
    for_(i,1,TEN6+1)
    {
        if(BIT1[i]>0)
        {
            cout<<i<<_endl;
            y=1;
            break;
        }
    }
    if(!y)
    {
        cout<<0<<_endl;

    }
}













