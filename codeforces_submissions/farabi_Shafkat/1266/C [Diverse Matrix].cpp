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
#define max4(a,b,c,d) max(a,max3(d,b,c))
#define min3(a,b,c) min(a,min(b,c))
#define debug(x) cout<<"DEBUG  "<<x<<" \n"
#define for_(i,st,lim) for(i=st;i<lim;i++)
#define fRead(x) freopen(x,"r",stdin)
#define fWrite(x) freopen (x,"w",stdout)
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
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
bool cmpdesc(ll a,ll b)
{
    return a>b;
}
ll my_abs(ll a)
{
    if(a<0)a*=-1;
    return a;
}




ll arr[510][510];
ll arr1[510][510];
int main()
{

    FAST;
    ll r,c;
    cin>>r>>c;
    // ll row;
    ll i=1,row,col;

    for_(row,1,r+1)
    {
        arr[row][0]=i;
        i++;
    }
    for_(col,1,c+1)
    {
        arr[0][col]=i;
        i++;
    }
    for_(row,1,r+1)
    {
        for_(col,1,c+1)
        {

            arr[row][col]=arr[row][0]*arr[0][col];//gcd(arr[row][0],arr[0][col]);


        }
    }
    set<ll>test;
    bool pass=1;
    for_(row,1,r+1)
    {
        ll gc=0;
        for_(col,1,c+1)
        {

            gc=gcd(gc,arr[row][col]);


        }
        if(test.find(gc)!=test.end())
        {
            pass=0;

            break;
        }
        test.insert(gc);

    }


    for_(col,1,c+1)
    {
        if(!pass)break;
        ll gc=0;
        for_(row,1,r+1)
        {

            gc=gcd(gc,arr[row][col]);


        }
        if(test.find(gc)!=test.end())
        {
            pass=0;

            break;
        }
        test.insert(gc);

    }
    if(!pass)
    {





        swap(r,c);
        i=1;
        for_(row,1,r+1)
        {
            arr[row][0]=i;
            i++;
        }
        for_(col,1,c+1)
        {
            arr[0][col]=i;
            i++;
        }
        for_(row,1,r+1)
        {
            for_(col,1,c+1)
            {

                arr[row][col]=arr[row][0]*arr[0][col];//gcd(arr[row][0],arr[0][col]);


            }
        }
        set<ll>test1;
        bool pass1=1;
        for_(row,1,r+1)
        {
            ll gc=0;
            for_(col,1,c+1)
            {

                gc=gcd(gc,arr[row][col]);


            }
            if(test1.find(gc)!=test1.end())
            {
                pass1=0;

                break;
            }
            test1.insert(gc);

        }


        for_(col,1,c+1)
        {
            if(!pass1)break;
            ll gc=0;
            for_(row,1,r+1)
            {

                gc=gcd(gc,arr[row][col]);


            }
            if(test1.find(gc)!=test1.end())
            {
                pass1=0;

                break;
            }
            test1.insert(gc);

        }

        if(pass1)
        {
            for_(col,1,c+1)
            {
                for_(row,1,r+1)
                {
                    cout<<arr[row][col]<<" ";
                }
                cout<<_endl;
            }
            return 0;
        }





        cout<<0<<_endl;
         return 0;






    }

    for_(row,1,r+1)
    {
        for_(col,1,c+1)
        {
            cout<<arr[row][col]<<" ";
        }
        cout<<_endl;
    }


}




























