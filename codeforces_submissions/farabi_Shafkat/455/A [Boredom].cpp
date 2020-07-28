#include<bits/stdc++.h>
using namespace std;
long long dp[100001][2];

vector< pair<int,int> >a;
vector< int>num;
int n,tmp;
long long ret1,ret2;
long long int rec(int i,bool last)
{
    if(i>=a.size())
        return 0;
 //   if(last==1)



       if( last==1&&(a[i-1].first+1==a[i].first||a[i-1].first-1==a[i].first))
        {
            if(i+1>=a.size())
                return rec(i+1,0);
            if(dp[i+1][0]==0)
            {
                ret1=rec(i+1,0);
                dp[i+1][0]=ret1;
                return ret1;
            }
            return dp[i+1][0];

        }

    else
    {
        if(i+1>=a.size())
            ret1= rec(i+1,0);
        else if(dp[i+1][0]==0)
        {
            ret1=rec(i+1,0);

            dp[i+1][0]=ret1;
            //return ret1;
        }
        else
            ret1=dp[i+1][0];
        if(i+1>=a.size())
            ret1= rec(i+1,1);
        else  if(dp[i+1][1]==0)
        {
            ret2=rec(i+1,1);
            dp[i+1][1]=ret2;
        }
        else
            ret2=dp[i+1][1];

        return max(ret1,(ret2+((long long)a[i].first)*(a[i].second)));
    }
}
int main()
{
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&tmp);
        num.push_back(tmp);
    }
    memset(dp,0,sizeof(dp));
    sort(num.begin(),num.end());

    int in=0;
    pair<int,int>p;
    int x;
    p=make_pair(num[0],1);
    //cout<<"dsadsa"<<p.first<<" "<<p.second<<endl;
    for(int i=1; i<n; i++)
    {
        if(num[i]==num[i-1])
        {
            x=p.second;
            x++;
            //cout<<x<<endl;
            p.second=x;
            //cout<<p.second<<" "<<p.first<<endl;
        }
        else
        {
            a.push_back(p);
            //cout<<p.first<<" "<<p.second<<endl;

            p=make_pair(num[i],1);
        }
    }
    a.push_back(p);
   // a.clear();
   // a.push_back(make_pair(100000,100000));
    // cout<<p.first<<" "<<p.second<<" "<<a.size()<<endl;
    printf("%lld",rec(0,0));
}
