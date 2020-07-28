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
char ch(char a,char b)
{
    set<char>st;
    st.insert('a');
    st.insert('b');
    st.insert('c');
    st.erase(a);
    st.erase(b);
    auto it=st.begin();
    return *it;
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
        ll perm[n+10],pos[n+10];
        memset(perm,0,sizeof(perm));
        memset(pos,0,sizeof(pos));
        ll left;
        ll right;
       // map<ll,ll>pos;
        for(ll i=0; i<n; i++)
        {
            cin>>perm[i];
            pos[perm[i]]=i;
            if(perm[i]==1)
            {
                left=right=i;
            }
        }
        string ans="";
        ans+="1";
        for(ll i=1;i<n;i++)
        {
            left=min(left,pos[i+1]);
            right=max(right,pos[i+1]);
           // cout<<left<<" " <<right<<" " <<i+1<<endl;
            if(right-left+1==i+1)ans+="1";
            else ans+="0";
        }
        cout<<ans<<_endl;

    }
}


























