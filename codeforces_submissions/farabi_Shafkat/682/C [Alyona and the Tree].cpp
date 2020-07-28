#include<bits/stdc++.h>
using namespace std;
int num[100001];
bool vis[100001];
//bool purg[100001];
int ans=0;
vector< pair<int,int> >graph[100001];
void dfs(int node,long long int dis,bool pur)
{
    if(vis[node]==1)return;
    vis[node]=1;


    if(dis>num[node])
    {
        pur=true;
    }
    if(pur==true)
        ans++;
   // cout<<node<<"<node "<<dis<<"<-dis "<<num[node]<<"<-numnode "<<pur<<" <-pur"<<endl;
    for(int i=0; i<graph[node].size(); i++)
    {
        dfs(graph[node][i].first,max(dis+graph[node][i].second,(long long)0),pur);
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&num[i+1]);
    }
    for(int i=0; i<n-1; i++)
    {
        int p,c;
        scanf("%d%d",&p,&c);
        graph[i+2].push_back(make_pair(p,c));
        graph[p].push_back(make_pair(i+2,c));
    }
    dfs(1,0,false);
    cout<<ans<<endl;
}
