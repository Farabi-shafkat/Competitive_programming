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
const ll ss=((ll)1)<<22;
ll arr1[ss];

ll seg_tree[(ss+20)];
ll n,m,sz;
bool build_tree(ll left,ll right,ll index) /////O(n)
{
    if(left==right)
    {
        //  cout<<left<< "   updqated "<<arr1[left]<<_endl;
        seg_tree[index]=arr1[left];
//        for_(i,0,sz+1)
//        {
//            cout<<arr1[i]<<" during"<<_endl;
//        }
        return 1;
    }
    ll mid=(left+right)/2;
    bool or1=build_tree(left,mid,index*2);
    build_tree(mid+1,right,index*2+1);
    if(or1)
        seg_tree[index]=seg_tree[index*2]|seg_tree[index*2+1];
    else
        seg_tree[index]=seg_tree[index*2]^seg_tree[index*2+1];
    return !or1;
}
ll query(ll *arr,ll *seg_tree,ll left,ll right,ll index,ll tl,ll tr)//O(log n), tl and tr are targets, left and right are current position
{
    if(tl>tr)return 0;
    if(left==tl&&right==tr)
    {
        return seg_tree[index];
    }
    ll mid=(left+right)/2;
    return query(arr,seg_tree,left,mid,(index*2),tl,min(tr,mid))+query(arr,seg_tree,mid+1,right,(index*2+1),max(tl,mid+1),tr);
}
bool update(ll *arr,ll *seg_tree,ll left,ll right,ll index,ll node,ll val)//node =update index, val=update value
{
    if(left==right)
    {
        arr[left]=val;
        seg_tree[index]=arr[left];
        return 1;
    }
    ll mid=(left+right)/2;
    bool or1;
    if(node<=mid)or1=update(arr,seg_tree,left,mid,index*2,node,val);
    else or1=update(arr,seg_tree,mid+1,right,index*2+1,node,val);
    if(or1)
        seg_tree[index]=seg_tree[index*2]|seg_tree[index*2+1];
    else
        seg_tree[index]=seg_tree[index*2]^seg_tree[index*2+1];
    return !or1;
}


int main()
{
    //driver program
//    ll arr[]={1,3,-2,8,-7};
//    ll arr_size=5;
//    ll seg_tree[4*arr_size+1];
//    memset(seg_tree,0,sizeof(seg_tree));
//    build_tree(arr,seg_tree,0,arr_size-1,1);
//    for(ll i=0;i<arr_size*4+1;i++)
//    {
//        cout<<i<< " "<<seg_tree[i]<<endl;
//    }
//    cout<<endl<<endl;
//    cout<<query(arr,seg_tree,0,arr_size-1,1,1,3)<<endl;;
//    update(arr,seg_tree,0,arr_size-1,1,3,10);
//    cout<<query(arr,seg_tree,0,arr_size-1,1,1,3)<<endl;;


    //  ll n,m;
   // cout<<ss<<_endl;
    FAST;
    cin>>n>>m;
    sz=((ll)1<<n)-1;
   // cout<<sz<<" nnn "<<m<<_endl;
    for_(i,0,sz+1)
    {
        // cout<<i<< "oops"<<_endl;
        cin>>arr1[i];
    }
//    for_(i,0,sz+1)
//    {
//        cout<<arr1[i]<<"before"<<_endl;
//    }
    // ll sz=((ll)1<<n)-1;
    //  memset(seg_tree,0,sizeof(seg_tree));
    //  memset(arr1,0,sizeof(arr1));
    build_tree(0,sz,1);
//    for_(i,0,(ll)1<<n)
//    {
//        cout<<arr1[i]<<_endl;
//    }
//    cout<<_endl;
//    for_(i,1,sz*3 - 1)
//    {
//        cout<<seg_tree[i]<<_endl;
//    }
    for_(i,0,m)
    {
        ll p,b;
        cin>>p>>b;
        update(arr1,seg_tree,0,sz,1,p-1,b);
        cout<<query(arr1,seg_tree,0,sz,1,0,sz)<<_endl;
    }
















}
