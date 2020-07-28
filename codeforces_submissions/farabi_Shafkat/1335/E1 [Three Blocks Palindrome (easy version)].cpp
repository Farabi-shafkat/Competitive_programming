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





int main()
{
  // FAST;
    ll t;
    cin>>t;
    for_(cs,1,t+1)
    {
        ll n;
        cin>>n;
        ll arr[n+10];
        ordered_set pos[27];
        for_(i,0,n)
        {
            cin>>arr[i];
            pos[arr[i]].insert(i);
        }
      //  cout<<" input taken "<<_endl;
        ll mx=1;
        for_(i,1,27)
        {
            for_(j,1,27)
            {
                //ll mid;
               //cout<<i<<" "<<j<<_endl;
                if(i==j)
                {
                    mx=max(mx,(ll)pos[i].size());
                    continue;

                }
                for( auto it1=pos[j].begin();it1!=pos[j].end();it1++)
                {
                    auto it2=it1;
                    //it2++;
                    ll mid=0;
                   // mid++;
                    while(it2!=pos[j].end())
                    {
                        mid++;
                       // cout<<mid<<_endl;
                        auto itA1=pos[i].lower_bound(*it1);
                        ll l=-1,r=-1;
                        ll s=pos[i].size();
                        if(itA1!=pos[i].end() and itA1!=pos[i].begin())
                        {
                            //if(itA1!=pos[i].begin())
                            itA1--;
                            l=pos[i].order_of_key(*itA1);
                        }
                        auto itA2=pos[i].upper_bound(*it2);
                        //cout<< (*itA1) << " pp "<< (*itA2)<<_endl;
                        if(itA2!=pos[i].end() )
                        {
                            //if(*itA1==*it1)itA1--;
                            r=pos[i].order_of_key(*itA2);
                        }
                        if((l+1!=0 and l!=-1) and (s-(r)!=0 and r!=-1)){
                            r=s-r;
                            l=l+1;
                            r=min(l,r);
                            l=r;
                            mx=max(mx,(mid+l+r));
                           // cout<<" swow \n";
                            }
                        else
                            mx=max(mx,mid);
                       // cout<<l<<" "<<r<<" "<<" "<<(l+1+mid+(s-(r)))<<" "<<mx<<" sssssssssssss \n";
                        it2++;
                    }

                }
            }

        }
        cout<<mx<<_endl;

    }



}















/*
3
5

1 1 3 1 5


*/






