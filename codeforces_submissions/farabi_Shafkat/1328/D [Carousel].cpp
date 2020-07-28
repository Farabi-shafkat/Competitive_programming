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


ll fig[2*TEN5+10];

ll col[2*TEN5+10];
ll col1[2*TEN5+10];
ll n;
bool chk(ll * col)
{
    for_(i,0,n-1)
    {
        if(fig[i]!=fig[i+1]&&col[i]==col[i+1])
        {
            return 0;

        }


    }
    if(fig[n-1]!=fig[0]&&col[n-1]==col[0])
    {
        return 0;

    }
    return 1;

}

int main()
{

    ll t;
    cin>>t;

    while(t--)
    {


        cin>>n;



        for_(i,0,n)
        {
            cin>>fig[i];
            //  fig_cn[fig[i]]++;

        }
        for_(i,0,n)
        {

            col[i]=0;
        }
        if(chk(col))
        {
            cout<<1<<_endl;
            for_(i,0,n)
            {
                cout<<col[i]+1<<" ";
            }
            cout<<_endl;
            continue;
        }
        for_(i,0,n)
        {

            col[i]=i%2;
        }
        if(n%2==0)
        {
            cout<<2<<_endl;
            for_(i,0,n)
            {
                cout<<col[i]+1<<" ";
            }
            cout<<_endl;

        }
        else
        {
            ll in=0;
            bool b=0;
            for_(i,0,n)
            {
              //  cout<<fig[i]<<" "<<fig[i+1]<<" "<<b<<_endl;
                 col1[i]=in%2;
                in++;
                if(i!=n-1&&fig[i]==fig[i+1]&&b==0)
                {
                    in++;
                    b=1;
                }

            }

             //cout<<"\n chk "<<chk()<<_endl;
            if(chk(col1))
            {
                cout<<2<<_endl;
                for_(i,0,n)
                {
                    cout<<col1[i]+1<<" ";
                }
                cout<<_endl;
                continue;
            }





            col[n-1]=0;
            if(chk(col))
            {
                cout<<2<<_endl;
                for_(i,0,n)
                {
                    cout<<col[i]+1<<" ";
                }
                cout<<_endl;
                continue;
            }
            col[n-1]=1;
            if(chk(col))
            {
                cout<<2<<_endl;
                for_(i,0,n)
                {
                    cout<<col[i]+1<<" ";
                }
                cout<<_endl;
                continue;
            }
            col[n-1]=2;
            if(chk(col))
            {
                cout<<3<<_endl;
                for_(i,0,n)
                {
                    cout<<col[i]+1<<" ";
                }
                cout<<_endl;
                continue;
            }


        }
    }



}























