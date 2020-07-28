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




int main()
{
    //FAST;
    ll t;
    cin>>t;
    while(t--)
    {
        ll arr[9][9];
        for_(i,0,9)
        {
            string str;
            cin>>str;
            for_(j,0,9)
            {
                arr[i][j]=str[j]-'0';

            }

        }
//        arr[0][1]=arr[0][0];
//        arr[1][4]=arr[1][3];
//        arr[2][7]=arr[2][6];
//
//        arr[3][4]=arr[3][3];
//        arr[4][7]=arr[4][6];
//        arr[5][1]=arr[5][0];
//
//        arr[6][7]=arr[6][6];
//        arr[7][1]=arr[7][0];
//        arr[8][4]=arr[8][3];
        //cout<<_endl;
        for_(i,0,9)
        {
            ll j;
            if(i==0)j=0;
            if(i==1)j=4;
            if(i==2)j=8;

            if(i==3)j=2;
            if(i==4)j=3;
            if(i==5)j=7;

            if(i==6)j=1;
            if(i==7)j=5;
            if(i==8)j=6;
            arr[i][j]++;
            if(arr[i][j]==10)arr[i][j]=1;

        }
        for_(i,0,9)
        {

            for_(j,0,9)
            {
                //if(j%3==0)cout<<" ";
                cout<<arr[i][j];
            }
           // if(i%3==2)cout<<"\n ";
            cout<<_endl;

        }




    }


}
/*

154 873 296
386 592 714
729 641 835

863 725 149
975 314 628
412 968 357

631 457 982
598 236 471
247 189 563

114 873 296
386 552 714
729 641 885

883 725 149
975 334 628
412 968 337

661 457 982
598 226 471
247 189 553

    .
 254 873 296
 386 692 714
 729 642 835

 873 725 149
 975 324 628
 412 968 457

 632 457 982
 598 237 471
 247 189 573


*/





















