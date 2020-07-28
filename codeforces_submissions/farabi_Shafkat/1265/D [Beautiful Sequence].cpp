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
#define min3(a,b,c) min(a,min(b,c))
#define debug(x) cout<<"DEBUG  "<<x<<" \n"
#define for_(i,lim) for(i=0;i<lim;i++)

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<pair<ll,ll> , null_type,less<pair<long long,long long >  >, rb_tree_tag,tree_order_statistics_node_update>
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
ll state=1;


map<int,ll>frq;
int main()
{

    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    frq[0]=a;
    frq[1]=b;
    frq[2]=c;
    frq[3]=d;
    ll now;
    for(auto pr:frq)
    {
        if(pr.second>0)
        {
            now=pr.first;
            break;
        }
    }
    ll sum=a+b+c+d;
    ll il;
    vector<ll>ans,ans1;
    bool ig=0;
//    if(b!=0&&c>=d)
//    {
//        ig=1;
//    }
    // cout<<ig<<" ig "<<endl;
    il=0;
    while(ans.size()<sum)
    {

        if(ig&&il==0)
        {
            now++;
            il++;
            continue;
        }
        if(frq[now]>0)
        {

            frq[now]--;
            ans.pb(now);



        }
        if(frq[now-1]>0)now--;
        else now++;
        il++;
    }
    bool bl=1;

    for_(il,ans.size())
    {
        if(il!=0&&my_abs(ans[il]-ans[il-1])!=1)
        {
            bl=0;
            break;
        }
    }
    for(auto pr:frq)
    {
        if(pr.second!=0)bl=0;
    }

    /////////////////
    ig=1;
    frq[0]=a;
    frq[1]=b;
    frq[2]=c;
    frq[3]=d;
    for(auto pr:frq)
    {
        if(pr.second>0)
        {
            now=pr.first;
            break;
        }
    }
    il=0;
    while(ans1.size()<sum)
    {

        if(ig&&il==0)
        {
            now++;
            il++;
            continue;
        }
        if(frq[now]>0)
        {

            frq[now]--;
            ans1.pb(now);



        }
        if(frq[now-1]>0)now--;
        else now++;
        il++;
    }
    bool bl1=1;

    for_(il,ans1.size())
    {
        if(il!=0&&my_abs(ans1[il]-ans1[il-1])!=1)
        {
            bl1=0;
            break;
        }
    }
    for(auto pr:frq)
    {
        if(pr.second!=0)bl1=0;
    }

   // cout<<bl1<<"   bl1"<<endl;




    if(!bl&&!bl1)
    {
        cout<<"NO\n";
//        for(auto numb:ans1)
//        {
//            cout<<numb<<" ";
//        }
        return 0;
    }
    cout<<"YES\n";
    if(bl)
    {
        for(auto numb:ans)
        {
            cout<<numb<<" ";
        }
    }
    else if(bl1)
    {
        for(auto numb:ans1)
        {
            cout<<numb<<" ";
        }

    }
    cout<<_endl;
}















