
#include<bits/stdc++.h>
using namespace std;

//#
//#  ######
//#  #    #
//#  ######
//#  #    #
//#  #    #   P E R T U R E
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



#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<pair<ll,ll> , null_type,less<pair<long long,long long >  >, rb_tree_tag,tree_order_statistics_node_update>
int main()
{

    int n;
    cin>>n;
    while(n--)
    {
        int c,sum;
        cin>>c>>sum;
        int rem=sum;
        int unit=c;
        ll cost=0;
        while(unit!=0&&rem!=0)
        {
            ll x=ceil(rem/(double)unit);
          //  cout<<x<<" x"<<endl;
            cost+=x*x;
            rem-=x;
            unit--;
            // cout<<unit<<" unit "<<rem<<endl;
        }
        cout<<cost<<_endl;
    }
}
