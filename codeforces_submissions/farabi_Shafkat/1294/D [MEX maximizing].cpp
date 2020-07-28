
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
    if(a.ff==b.ff)
    {
        return a.ss<b.ss;
    }
    else
        return a.ff<b.ff;
}
int main()
{
    FAST;
    ll t;
    //  cin>>t;
    set<ll>st;
    map<ll,ll>mp;
    // while(t--)
    //{
    ll q,x;
    cin>>q>>x;
    ll mxn=0;
    ll y;
    ll itt=0;
    while(q--)
    {
        cin>>y;
        y=y%x;

      //  cout<<" look at this "<< y<<" "<<itt <<_endl;
        itt++;
        if( my_abs(mxn-y)%x==0)
        {
            //cout<<" dhukse1"<<endl;
            st.insert(mxn);
            mp[y]=mxn;
            auto it=st.find(mxn);
            while(*it==mxn)
            {
                mxn++;
                it++;
            }
        }
        else
        {
            if(mp.find(y)==mp.end())
            {
                // cout<<" dhukse2"<<endl;

                st.insert(y);
                if(y==mxn)
                {
                    auto it=st.find(mxn);
                    while(*it==mxn)
                    {
                        mxn++;
                        it++;
                    }
                }
                mp[y]=y;
            }
            else
            {
                // cout<<" dhukse3"<<endl;
                ll num=mp[y]+x;
                st.insert(num);
                mp[y]=num;
                if(num==mxn)
                {
                    auto it=st.find(mxn);
                    while(*it==mxn)
                    {
                        mxn++;
                        it++;
                    }
                }
            }

        }

        cout<<mxn<<_endl;
        // }

    }



}




























