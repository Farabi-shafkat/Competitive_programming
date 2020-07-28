#include<bits/stdc++.h>
using namespace std;
int arr[1000000];
int can[1005][1005];
int n,m;
bool can_rec(int in,int sum)
{
    if(sum<0)sum=sum+m;
   // cout<<in<<" "<<sum<<endl;
    //if(can[in][sum]!=-1)return can[in][sum];
    if(in==-1)
    {
        if(sum==0)return 1;
        else return 0;
    }
    if(can[in][sum]!=-1)
        return can[in][sum];
    if(can_rec(in-1,sum)||can_rec(in-1,(sum%m-arr[in]%m)%m))
    {
        can[in][sum]=1;
        return 1;
    }
    else can[in][sum]=0;
    return 0;
}
int main()
{
 //   int n,m;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        arr[i]=arr[i]%m;
    }
    memset(can,-1,sizeof(can));
    if(n>m){cout<<"YES";return 0;}
    if(can_rec(n-1,m))
    {
        cout<<"YES";
        return 0;
    }
    cout<<"NO";


}
