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

#define MOD TEN9+7 ///////<<<<<<<<<<<<<<<<<<=====MOD value change here!!!!!
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





bool cmp(pll a,pll b)
{
    return my_abs(a.ff-a.ss)<my_abs(b.ff-b.ss);
}


int main()
{

    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
       // ll l=-1,r=-1,u=-1,d=-1;
        ll x=0;
        ll y=0;
        map<pll,ll>seen;
        vector<pll>ans;
        seen[{0,0}]=-1;
        for_(i,0,n)
        {


            if(s[i]=='L')
            {
                x--;
            }
            else if(s[i]=='R')
            {
                x++;
            }
            else if(s[i]=='U')
            {
                y++;
            }
            else if(s[i]=='D')
            {
                y--;
            }
            if(seen.find({x,y})==seen.end())
            {
          //  cout<<"eikhane"<<_endl;
                seen[{x,y}]=i;
            }
            else
            {
              //  cout<<ans.ff-ans.ss<<" "<<seen[{x,y}]-i<<" "<<_endl;
                //if(my_abs(ans.ff-ans.ss)>my_abs(seen[{x,y}]-i))
                
                if(seen[{x,y}]+2<i+1)
                    ans.pb({seen[{x,y}]+2,i+1});
                seen[{x,y}]=i;
            }
            //cout<<x <<" "<<y<<" "<<ans.ff<<" "<<ans.ss<<_endl;

        }
        sort(all(ans),cmp);
        if(ans.size()==0)
            cout<<-1<<_endl;
        else
            cout<<ans[0].ff<<" "<<ans[0].ss<<_endl;
    }

}



























