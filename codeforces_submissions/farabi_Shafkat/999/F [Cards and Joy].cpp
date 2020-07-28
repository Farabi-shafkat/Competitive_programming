#include<bits/stdc++.h>
using namespace std;
int num[5001];
map<int,int>num_c;
map<int,bool>use;
map<int,int>::iterator it;
int fav[500];
int joy[10];
int n,k;
int card;
int cnt;
int dp[501][5001];
int func(int pl,int num)
{
    //cout<<pl<<" "<<num<<endl;
    if(dp[pl][num]!=-1)
        return dp[pl][num];
    if(num<=0||pl>=n)
        return 0;
    if(card!=fav[pl])
        return func(pl+1,num);

    // cout<<pl<<"sd "<<num<<endl;;
    int c=0;
    int ret=0,tm;
    while(c<=num&&c<=k)
    {
        //cout<<pl<<" found the bug "<<c<<" "<<num<<endl;
       // c++;
        tm=joy[c]+func(pl+1,num-c);
        if(tm>ret)
            ret=tm;
        //cout<<ret<<" <-- "<<card <<endl;
        c++;
    }
    dp[pl][num]=ret;
    return ret;
}
int main()
{
    //int n,k;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n*k;i++)
    {
        scanf("%d",&num[i]);
        if(num_c[num[i]]!=0)
            num_c[num[i]]++;
        else
            num_c[num[i]]=1;
    }
   // cout<<"exit"<<endl;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&fav[i]);
    }
    joy[0]=0;
    for(int i=1;i<=k;i++)
    {
        scanf("%d",&joy[i]);
    }
   // cout<<"bal"<<endl;
    int ans=0;
    int pl=0;
   // for(it=num_c.begin();it!=num_c.end();it++)
   // {
    for(int i=0;i<n;i++)
    {

        card=fav[i];
        if(use[card]==1)
        {
            continue;
        }
        use[card]=1;
        cnt=num_c[card];
        //card=it->first;
        //cnt=it->second;
        memset(dp,-1,sizeof(dp));
       // cout<<card<<" dsd "<<cnt<<endl;
        int ret;
        ret=func(0,cnt);
       // cout<<ret<<endl;
        ans+=ret;
    }
    //cout<<ans<<endl;
    printf("%d",ans);
}
