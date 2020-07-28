/*


               BASIC TEMPLATES


*/
//#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops")
//#pragma GCC target("avx,avx2")

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
#define emb emplace_back
#define ff first
#define ss second
#define FAST cin.tie(0); ios_base::sync_with_stdio (false)
#define pii pair<int,int>
#define TEN6 1000000
#define TEN7 10000000
#define TEN5 100000
#define TEN4 10000
#define TEN9 1000000000
#define ipv pair<ll,vector<ll> >
#define pll pair<ll,ll>
#define CASE(x) "Case "<<x<<": "
#define _endl "\n"


#define for_r(i,st,lim) for(ll i=st-1;i>=lim;i--)
#define fRead(x) freopen(x,"r",stdin)
#define fWrite(x) freopen (x,"w",stdout)
#define all_set(arr,val) memset(arr,val,sizeof(arr))
#define all(x) x.begin(),x.end()
#define for_(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

//lower_bound returns an iterator pointing to the first element in the range [first,last) which has a value not less than ‘val’.

//upper_bound returns an iterator pointing to the first element in the range [first,last) which has a value greater than ‘val’.
using namespace __gnu_pbds;

#define ordered_set tree<ll , null_type,less<ll >, rb_tree_tag,tree_order_statistics_node_update>

#define MOD 998244353 ///////<<<<<<<<<<<<<<<<<<=====MOD value change here!!!!!
#define INF 5e18
#define what_is(x) cerr << #x << " is " << x << endl;
#define unique_all(div) sort( div.begin(), div.end() );div.erase( unique( div.begin(), div.end() ), div.end() );
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
ll my_abs(ll x)
{
    if(x<0) x= x*-1;
    return x;
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
ll lcm(ll a,ll b)
{
    return a*b / gcd(a,b);
}

bool cmp(pll a,pll b)
{
    return a.ff>b.ff;
}
ll calc(string t, ll in, char c)
{
    ll ret =0;
    for_(i,0,t.size())
    {
        if(t[i]==' ')continue;
        else if(t[i]>c)
        {
            ret += my_abs(in-i);
        }

    }
    return ret;

}
int main()
{
    FAST;
    ll q;
    cin>>q;
    for_(cs,1,q+1)
    {
        string s;
        cin>>s;
        ll m;
        cin>>m;
        ll arr[m+10];
        for_(i,0,m)
        {
            cin>>arr[i];

        }
        map<char,ll>mp;
        for(char c:s)
        {
            mp[c]++;
        }


        string t(m,' ');
        ll cnt=0;
        char ch=' ';
        while(1)
        {

            queue<ll>q;
            for_(i,0,m)
            {
                if(arr[i]==0 and t[i]==' ')
                    q.push(i);
            }

            for(char chh = (mp.rbegin()->ff);chh>=(mp.begin()->ff);chh--)
            {

                if(mp[chh]>=q.size()){
                    ch = chh;
                  //  it->ss = it->ss - q.size();
                    mp.erase(chh);


                    break;
                }
                mp.erase(chh);
            }

            while(q.size()!=0)
            {
                ll in = q.front();
                //cout<<in<<_endl;
                q.pop();
                t[in]=ch;
                for_(i,0,m)
                {
                    if(arr[i]!=0 and t[i]==' ')
                        arr[i]= arr[i]-my_abs(i-in);
                }
                cnt++;
            }
//            cout<<ch<<_endl;
//            for_(i,0,m)
//            {
//                cout<<i<<"->"<<arr[i]<<t[i]<<" ";
//            }
//            cout<<endl;

            if(cnt==m)
            {
                cout<<t<<_endl;
                break;
            }

        }



    }


}
//hejig m j eh l
//iejkh m j ei l











