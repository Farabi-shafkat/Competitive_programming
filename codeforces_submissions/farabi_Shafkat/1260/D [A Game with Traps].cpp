
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
#define SIZE TEN6
ll agil[SIZE];
vector<ll>pos[SIZE];
ll pwr[SIZE];
ll dis[SIZE];
//bool active[SIZE];
ll m,n,k,t;
ll i;
bool chk(ll num)
{
    ll p=num;
//   cout<<p<<" power "<<endl;
    // ll team=0;
    bool tm=true;
    ll cost=n+1;
    ll next=-1;
    ll acc=0;
    // memset(active,1,sizeof(active));
    for(ll i1=1; i1<=n; i1++)
    {
        //ac=0;
        // next=i1-1;
        for(auto id:pos[i1])
        {
            if(pwr[id]>p)
            {

                next=max(next,dis[id]);
               // cout<<next<<" dis id "<<dis[id]<<endl;
            }

        }
        if(next<=i1&&tm==false)
        {
            acc++;
            cost+=acc*2;
            acc=0;
            tm=true;
            next=-1;
        }
        else if(next<i1&&tm==true)
        {
//            cost++;
            acc=0;
            next=-1;
//
        }
        else
        {
            acc++;
            tm=false;

        }
       // cout<<" i1:"<<i1<<" cost:"<<cost<<" acc:"<<acc<<" tm:"<<tm<<" next"<<next<<endl;
//
    }
    //cost++;
   //  cout<<num<<" chk "<<" "<<cost+2*acc<<" "<<t<<endl;
    return (cost+2*acc<=t);
}
int main()
{
    FAST;
    cin>>m>>n>>k>>t;
    memset(dis,-1,sizeof(dis));
    memset(pwr,0,sizeof(pwr));
   // memset(active,0,sizeof(active));
    for_(i,m)
    {
        cin>>agil[i];

    }
    sort(agil,agil+m,cmpdesc);
    ll id=0;
    for_(i,k)
    {
        ll l,r,d;
        cin>>l>>r>>d;

        pos[l].pb(id);
        dis[id]=r;
        pwr[id]=d;
        id++;
    }
    ll low=0;
    ll high=200005;
    ll mid;
    ll z=200005;
    while(low<=high)
    {
      //  cout<<"high "<<high<<" mid"<< mid<<" low "<< low<< endl;
        mid=(low+high)/2;
        if(!chk(mid))
        {
            low=mid+1;
        }
        else
        {
            z=min(z,mid);
            high=mid-1;
        }
    }
   // cout<<"z  "<< z<<endl;
    ll ans=0;
    for(ll i1=0;i1<m;i1++)
    {
        if(agil[i1]>=z)
        {
            ans++;
        }
    }
    cout<<ans<<_endl;

}















