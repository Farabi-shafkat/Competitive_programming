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


using namespace __gnu_pbds;
#define ordered_set tree<pair<ll,ll> , null_type,less<pair<long long,long long >  >, rb_tree_tag,tree_order_statistics_node_update>

#define MOD 1000000007 ///////<<<<<<<<<<<<<<<<<<=====MOD value change here!!!!!
#define INF 0x3f3f3f3f










map<ll,ll>frq;
map<ll,ll>ffr;
ll num[120];
ll ans[120];
int main()
{
    ll n;
    cin>>n;
    all_set(ans,-1);
    for_(i,0,n)
    {
        ll x;
        cin>>x;
        num[i]=x;
        frq[x]++;
    }
    for(auto el:frq)
    {
        ffr[el.ss]++;
    }
    if(ffr[1]%2==0)
    {
        cout<<"YES\n";
        ll ar=0;
        for_(i,0,n)
        {
            if(frq[num[i]]==1)
            {
                if(ar%2)
                {
                    cout<<"B";
                    ar++;
                }
                else
                {
                    cout<<"A";
                    ar++;
                }

            }
            else
                cout<<"B";
        }
    }
    else
    {
        ll exep=-1;
        bool b=0;
        for(auto el:ffr)
        {
            if(el.ff>2&&el.ss>0)
            {
                for_(i,0,n)
                {
                    if(frq[num[i]]==el.ff)
                    {
                        exep=i;
                        b=1;
                        break;
                    }

                }
                break;
            }
        }
        char exep_c=' ';
        if(!b)
        {
            cout<<"NO\n";
            return 0;
        }
        cout<<"YES\n";
        ll ar=0;
        for_(i,0,n)
        {

            if(frq[num[i]]==1||exep==i)
            {
                if(ar%2)
                {
                    // cout<<"B";
                    if(exep==i)
                    {
                        exep_c='A';
                    }
                    ans[i]='B';
                    ar++;
                }
                else
                {
                    if(exep==i)
                    {
                        exep_c='B';
                    }
                    ans[i]='A';
                    ar++;
                }

            }

        }
        for_(i,0,n)
        {
            if(ans[i]==-1)
            {
                ans[i]=exep_c;
            }
        }
        for_(i,0,n)
        {
            cout<<(char)ans[i];
        }

    }
}


















