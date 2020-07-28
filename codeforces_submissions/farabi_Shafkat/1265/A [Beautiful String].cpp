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

    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        bool b=0;
        for(int i=1; i<s.size(); i++)
        {
            if(s[i]==s[i-1]&&s[i]!='?')
            {
                cout<<-1<<_endl;
                b=1;
                break;
            }
        }
        if(b)continue;
        if(s.size()==1&&s[0]=='?')
        {
            cout<<"a\n";
            continue;
        }
        if(s[0]=='?')
        {
            s[0]=ch('?',s[1]);
        }

        for(int i=1; i<s.size(); i++)
        {
            if(s[i]=='?')
            {
                s[i]=ch(s[i-1],s[i+1]);
            }
        }
        cout<<s<<_endl;
    }
}


























