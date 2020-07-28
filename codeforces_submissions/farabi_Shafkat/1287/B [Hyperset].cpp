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


string card[1520];
unordered_map<string,ll>mp;
//ll hsh[1520];
//ll frq[TEN6];
  char str[TEN4];
char get(char a,char b)
{
    if(a==b)return a;
    if(a=='S'&&b=='E')return 'T';
    if(a=='E'&&b=='T')return 'S';
    if(a=='T'&&b=='E')return 'S';
    if(a=='E'&&b=='S')return 'T';
    if(a=='T'&&b=='S')return 'E';
    if(a=='S'&&b=='T')return 'E';
   // return *st1.begin();
}
int main()
{
    //FAST;
    ll n,k;
   // all_set(frq,0);
   // cin>>n>>k;
    scanf("%lld%lld",&n,&k);
    for_(i,0,n)
    {
        //cin>>card[i];

        scanf("%s",str);
        card[i]=str;
        mp[card[i]]++;
    }
    ll sum=0;
    for_(i,0,n)
    {
        ll j;
       // st.erase(card[i]);
        mp[card[i]]=0;
        for(j=i+1;j<n;j++)
        {


           string sr="";
           for_(l,0,k)
           {
                sr+=get(card[i][l],card[j][l]);

           }
          //  st.erase(card[j]);
           mp[card[j]]=0;
         //  cout<<sr<<" eita"<<endl;
           //if(st.find(sr)!=st.end())
           if( mp[sr]!=0)
           {

             //  cout<<card[i]<<" "<<card[j]<<" "<<sr<<" eita paise"<<endl;
               sum++;
           }
           else
                mp[card[j]]=1;
        }
       // i=j;
    }
    printf("%lld\n",sum);
    //cout<<sum<<_endl;
}






















