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
ll my_abs(ll x )
{
    if(x<0)return -1*x;
    return x;

}
char next_move(pll now,pll f)
{
    if(my_abs(now.ss-f.ss)==0)
    {
        if(now.ff<f.ff)
            return 'D';
        else return 'U';
    }
    if(my_abs(now.ff-f.ff)<my_abs(now.ss-f.ss)&&(now.ff!=f.ff))
    {
        if(now.ff<f.ff)
            return 'D';
        else return 'U';

    }
    else
    {

        if(now.ss<f.ss)
            return 'R';
        else return 'L';
    }
}


int main()
{
    ll n,m,k;
    cin>>n>>m>>k;

    pll chip[k+10];
    pll fin[k+10];
    bool is_fin[k+10];
    for_(i,0,k)
    {
        cin>>chip[i].ff>>chip[i].ss;

    }
    for_(i,0,k)
    {
        cin>>fin[i].ff>>fin[i].ss;

    }
    if(n*m==1)
    {
        cout<<0;
        return 0;
    }
    // cout<<m+n+n*(m+1)<<_endl;
    ll an=0;
    string str="";
    for_(i,0,m-1)
    {
        str=str+"R";
        an++;
    }
    for_(i,0,n-1)
    {
        str=str+"D";
        an++;

    }

    for_(i,0,m)
    {
        for_(j,0,n-1)
        {
           // if(j==m-1)
              //  continue;
            if(i%2==0)
                str=str+"U";
            else
                str=str+"D";
            an++;
        }
        if(i!=m-1)
        {
            str=str+"L";
            an++;
        }


    }
    cout<<an<<"\n"<<str<<_endl;

}























