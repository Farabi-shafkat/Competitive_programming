
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
#define ipv pair<int,vector<ll> >
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

#define MOD TEN9+7 ///////<<<<<<<<<<<<<<<<<<=====MOD value change here!!!!!
#define INF 5e13


void build_tree(ll *arr,ll *seg_tree,ll left,ll right,ll index) /////O(n)
{
    if(left==right)
    {
        seg_tree[index]=arr[left];
        return;
    }
    ll mid=(left+right)/2;
    build_tree(arr,seg_tree,left,mid,index*2);
    build_tree(arr,seg_tree,mid+1,right,index*2+1);
    seg_tree[index]=seg_tree[index*2]+seg_tree[index*2+1];
    return;
}
ll query(ll *arr,ll *seg_tree,ll left,ll right,ll index,ll tl,ll tr)//O(log n), tl and tr are targets, left and right are current position
{
    if(tl>tr)return 0;
    if(left==tl&&right==tr)
    {
        return seg_tree[index];
    }
    ll mid=(left+right)/2;
    return query(arr,seg_tree,left,mid,(index*2),tl,min(tr,mid))^query(arr,seg_tree,mid+1,right,(index*2+1),max(tl,mid+1),tr);
}
void update(ll *arr,ll *seg_tree,ll left,ll right,ll index,ll node,ll val)//node =update index, val=update value
{
    if(left==right)
    {
        arr[left]=val;
        seg_tree[index]=arr[left];
        return;
    }
    ll mid=(left+right)/2;
    if(node<=mid)update(arr,seg_tree,left,mid,index*2,node,val);
    else update(arr,seg_tree,mid+1,right,index*2+1,node,val);
    seg_tree[index]=seg_tree[index*2]^seg_tree[index*2+1];

}

ll arr[TEN6+10];
unordered_map<ll,ll> last;
ll res[TEN6+10];
ll ans[TEN6+10];
ll seg_tree[(4*TEN6)+10];
struct DATA{
    ll l;
    ll r;
    ll id;
};
bool cmp(DATA a,DATA b)
{
    if(a.r==b.r)
    {
        return a.l<b.l;
    }
    return a.r<b.r;
}
int main()
{



    ll n;
    all_set(res,0);
    all_set(ans,0);
    all_set(seg_tree,0);
    scanf("%lld",&n);
    for_(i,0,n)
    {
        scanf("%lld",&arr[i]);

    }
    ll q;
    scanf("%lld",&q);
    DATA data[q+1];
    for_(i,0,q)
    {
        scanf("%lld%lld",&data[i].l,&data[i].r);
        data[i].id=i;
        data[i].l--;
        data[i].r--;
    }
    sort(data,data+q,cmp);
    ll lt=0;
    ll rt=-1;
    for_(i,0,q)
    {
        ll cl,cr;
        cl=data[i].l;
        cr=data[i].r;
        //cout<<cl <<" query pointers "<<cr<<_endl;
        while(rt<cr)
        {
            rt++;
            if(last.find(arr[rt])!=last.end())
            {
                //res[rt]=
                update(res,seg_tree,0,n,1,last[arr[rt]],arr[rt]);
                last[arr[rt]]=rt;
            }
            else
            {
                last[arr[rt]]=rt;
            }
        }

        ll an=query(res,seg_tree,0,n,1,cl,rt);
//        cout<<"res array"<<" "<<_endl;
//        for_(i,0,n)
//        {
//            cout<<res[i]<<" ";
//        }
//        cout<<"\nSeg tree"<<_endl;
//        for_(i,0,4*n)
//        {
//            cout<<i<<" "<<seg_tree[i]<<" \n";
//        }
//        cout<<_endl;
//        cout<<" result of query "<<an<<_endl;
        ans[data[i].id]=an;



    }
    for_(i,0,q)
    {
        printf("%lld\n",ans[i]);
    }

















}
