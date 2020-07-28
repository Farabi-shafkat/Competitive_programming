
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
        int a,b;
        cin>>a>>b;
        if(a==0&&b==0)cout<<"YES"<<_endl;
        else if(a!=0&&b!=0)
        {
            if((a+b)%3==0){

                    double alpha=(a+a-b)/3.0;
                    double beta=(a+b)/3.0-alpha;
                    if(ceil(alpha)==floor(alpha)&&(ceil(beta)==floor(beta))&&alpha>=0&&beta>=0)
                        cout<<"YES"<<_endl;
                    else cout<<"NO\n";

            }
            else cout<<"NO"<<_endl;
        }
        else cout<<"NO"<<_endl;
    }
}
