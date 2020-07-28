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
#define ordered_set tree<ll , null_type,less<ll  >, rb_tree_tag,tree_order_statistics_node_update>

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


int main()
{

    ll n;
    cin>>n;
    string s;
    cin>>s;
    vector<string>vec;
    ll op=0;
    ll cl=0;
    ll last=0;
    for_(i,0,n)
    {
        if(s[i]=='(')op++;
        else cl++;
        if(last==-1)
        {
            last=i;
        }
        if(op==cl&&op!=0)
        {
           // cout<<last<<" "<<i<<" "<<i-last+1<<_endl;
            vec.pb(s.substr(last,i-last+1));
            op=0;
            cl=0;
            last=-1;
        }
    }
    ll sum=0;
    ll an=0;
    for(string str:vec)
    {
        sum+=str.size();
        stack<char>st;
        bool f=1;
        for(char c:str)
        {
            if(st.size()==0&&c==')')
            {
                f=0;
                break;
            }
            else if(st.size()==0&&c=='(')
                st.push(c);

            else if(st.top()=='('&&c==')')st.pop();
            else st.push(c);

        }
        if(st.size()!=0)f=0;
        if(!f)
        {
            an+=str.size();
        }
    }
    if(sum!=s.size())
    {
        cout<<-1<<_endl;
        return 0;
    }
    cout<<an<<_endl;



}

















































