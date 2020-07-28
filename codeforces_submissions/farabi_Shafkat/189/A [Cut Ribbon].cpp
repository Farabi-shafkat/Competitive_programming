#include<bits/stdc++.h>
using namespace std;
int main()
{
    int dp[4001];
    for(int i=0;i<4001;i++)
        dp[i]=-99999;
    dp[0]=0;
    int a,b,c,n,r1,r2,r3;
    cin>>n>>a>>b>>c;
    for(int len=1;len<=n;len++)
    {
        if(len-a<0)
            r1=-9999;
        else
            r1=dp[len-a];
        if(len-b<0)
            r2=-9999;
        else
            r2=dp[len-b];
        if(len-c<0)
            r3=-9999;
        else
            r3=dp[len-c];
        dp[len]=max(r1,max(r2,r3))+1;
    }
    cout<<dp[n]<<endl;
}
