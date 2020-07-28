#include<bits/stdc++.h>
using namespace std;
int sum[100][100];
int sum_mp[201];
int taken[101];
int main()
{
    int n;
    queue<int>ans;
    cin>>n;
    int arr[n];
    memset(sum,-1,sizeof(sum));
    memset(sum_mp,0,sizeof(sum_mp));
    memset(taken,0,sizeof(taken));
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)continue;
            sum[i][j]=arr[i]+arr[j];
            sum_mp[arr[i]+arr[j]]++;
            if(sum_mp[arr[i]+arr[j]]*2==n)
                ans.push(arr[i]+arr[j]);
        }
    }
    vector<pair<int,int> > out;
    while(ans.size()!=0)
    {


       // cout<<ans.front()<<endl;
       // // ans.pop();

        memset(taken,0,sizeof(taken));
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                //cout<<sum[i][j]<<" ";
                if(sum[i][j]==ans.front()&&taken[i]!=1&&taken[j]!=1)
                {
                    // cout<<i+1<<" "<<j+1<<endl;
                    out.push_back(make_pair(i,j));
                    taken[i]=1;
                    taken[j]=1;
                }
            }
            // cout<<endl;
        }
        if(out.size()*2==n)
        {
           // cout<<"paisi"<<endl;
            break;
        }
        ans.pop();
        out.clear();
    }
    for(int i=0; i<out.size(); i++)
        cout<<out[i].first+1<<" "<<out[i].second+1<<endl;
}
