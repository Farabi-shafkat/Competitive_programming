
#include<bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;
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
int main()
{
    FAST;
    ll t;
    cin>>t;
    while(t--)
    {
        string s,t;
        cin>>s>>t;
        ll op=0,cnt=0;
        set<ll>st[26];
        for_(i,0,s.size())
        {
            st[s[i]-'a'].insert(i);
        }
        ll last=-1;
        auto it=st[0].begin();
        bool b=1;
        for_(i,0,t.size())
        {

            it=st[t[i]-'a'].lower_bound(last+1);
          //    cout<<i<<" "<<t[i]<<" "<<last<<" "<<*it<<_endl;
            if(it==st[t[i]-'a'].end())
            {
                cnt++;
                i--;
                if(last==-1)
                {
                    b=0;
                    break;
                }
                last=-1;
            }
            else
            {
                last=*it;
              //  i--;
            }
        }
        if(!b)
        {
            cout<<-1<<_endl;
            continue;
        }
        if(it!=st[t[t.size()-1]].end())
            cnt++;
        cout<<cnt<<_endl;

    }
}








