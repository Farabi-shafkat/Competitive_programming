#include<bits/stdc++.h>
using namespace std;
vector<int>graph[5001];
bool visited[5001];
int parent[5001];
int in_deg[5001];
int out_deg[5001];

bool chk(int a,int b) //1 means a is before b;
{
    int c_a=0,c_b=0;
    for(int i=0;i<graph[a].size();i++)
    {
        if(in_deg[graph[a][i]]-1==0&&out_deg[graph[a][i]]!=0)
            c_a++;
    }
    for(int i=0;i<graph[b].size();i++)
    {
        if(in_deg[graph[b][i]]-1==0&&out_deg[graph[b][i]]!=0)
            c_b++;
    }
    return c_a>c_b;
}
bool comp(int a,int b)
{
    if(in_deg[a]==in_deg[b])
    {
        if(out_deg[a]==out_deg[b])
        {
            //memset(m_vis,0,sizeof(m_vis));
            //return m_dfs(a)>m_dfs(b);
            return chk(a,b);
        }
        return out_deg[a]>out_deg[b];
    }
    return in_deg[a]<in_deg[b];
}
void dfs(int node)
{
    visited[node]=1;
    for(int i=0; i<graph[node].size(); i++)
    {
        if(visited[graph[node][i]]==0)
        {
            parent[graph[node][i]]=parent[node];
           // cout<<node<<endl;
            dfs(graph[node][i]);
        }
    }
    return;
}
int main()
{
    int n,m,s;
    scanf("%d%d%d",&n,&m,&s);
    for(int i=0; i<m; i++)
    {
        int u,v;
        scanf("%d%d",&u,&v);
        graph[u].push_back(v);
    }
    memset(visited,0,sizeof(visited));
    memset(in_deg,0,sizeof(in_deg));
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<graph[i].size();j++)
        {
            in_deg[graph[i][j]]++;
        }
        out_deg[i]=graph[i].size();
    }
    for(int i=1; i<=n; i++)
    {
        parent[i]=i;
    }
    dfs(s);
    vector<int>d_set;
    int seq[5001];
    for(int i=1;i<=n;i++)
    {
        seq[i-1]=i;
    }
    sort(seq,seq+n,comp);
    for(int i=0; i<n; i++)
    {
        if(visited[seq[i]]==0)
        {
            d_set.push_back(seq[i]);
            dfs(seq[i]);
        }
    }
    cout<<d_set.size()<<endl;

}
