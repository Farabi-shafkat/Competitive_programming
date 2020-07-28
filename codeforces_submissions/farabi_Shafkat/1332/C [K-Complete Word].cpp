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

ll my_abs(ll x)
{

    if(x<0)return -1*x;
    return x;
}

int main()
{
    ll t;
    cin>>t;

    // cout<<"dsd"<<_endl;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,ll> ghor[k+100];
        for(ll i=0; i<n; i+=k)
        {
            ll cnt=0;
            for(ll j=0; j<k; j++)
            {

                ll b=k-j-1;
                if(i+j>=n||i+b>=n)break;
                if(j>b)break;
                if(j==b)
                {
                    ghor[j][s[i+j]]++;

                    break;
                }
                // if(s[i+j]!=s[i+b])cnt++;
                ghor[j][s[i+j]]++;
                ghor[j][s[i+b]]++;

            }

        }
        string perf="";
        for(ll i=0; i<=ceil(k/2.0); i++)
        {
            ll mx=0;
            char ch=-1;
            for(pll x:ghor[i])
            {
                if(x.ss>mx)
                {
                    mx=x.ss;
                    ch=x.ff;
                }
            }
            if(ch!=-1)
                perf+=ch;

        }
        //string temp=perf;
        //perf="";
//        for_(i,0,temp.size())
//        {
//            if(temp[i]>='a'&&temp[i]<='z')
//                perf+=temp[i];
//        }
        string out="";
        string rev_out="";
        //cout<<" peerer ...  before "<<perf<<" "<<perf.size()<<_endl;
        for_(i,0,perf.size())
        {
            if(i==perf.size()-1 && k%2==1)
            {
                out+=perf[i];
                break;
            }
            out+=perf[i];
            rev_out=perf[i]+rev_out;
        }
        perf= out+rev_out;
       // cout<<" peerer ... "<<perf<<_endl;
        ll cnt1=0;
        for(ll i=0; i<n; i+=k)
        {
            ll cnt=0;
            for(ll j=0; j<k; j++)
            {
                if(i+j>=n)break;
                if(s[i+j]!=perf[j])cnt1++;
                // if(s[i+j]!=s[i+b])cnt++;


            }

        }
        cout<<cnt1<<_endl;
    }



}























