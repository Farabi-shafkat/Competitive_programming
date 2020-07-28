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
#define ordered_set tree< pll , null_type,less< pll  >, rb_tree_tag,tree_order_statistics_node_update>

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




int main()
{
FAST;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> daw[n+2];
        set<ll> in_daw[n+2];
        set<ll>king;
        for_(i,0,n)
        {
            king.insert(i+1);
            ll k;
            cin>>k;
            for_(j,0,k)
            {
                ll x;
                cin>>x;
                daw[i].pb(x);
                in_daw[i].insert(x);
            }
        }
        vector<ll>no;
        for_(i,0,n)
        {

            bool found=0;
            for_(j,0,daw[i].size())
            {
                if(king.find(daw[i][j])!=king.end())
                {
                    king.erase(daw[i][j]);
                    found=1;
                    break;
                }

            }
            if(!found)
            {
                no.pb(i);
            }

        }
        bool f=0;
        for_(i,0,no.size())
        {

            auto item=king.begin();
            while(item!=king.end())
            {
                if(in_daw[no[i]].find(*item)==in_daw[no[i]].end())
                {
                    cout<<"IMPROVE\n";
                    cout<<no[i]+1<<" "<<(*item)<<"\n";
                    f=1;
                    break;
                }
                item++;
            }
            if(f)break;
        }
        if(!f)
        {
            cout<<"OPTIMAL\n";
        }

    }

}























