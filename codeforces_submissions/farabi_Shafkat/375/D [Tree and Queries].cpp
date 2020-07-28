#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ff first
#define ss second
#define FAST cin.tie(0); ios_base::sync_with_stdio (false);
int color[100000+10];
int color_1[100000+10];
vector<int>graph[100000+10];
bool vis[100000+10];
int beg[100000+10];
int en[100000+10];
int cnt=0;
int seg;
int ans[100000+10];
int cur_l=0,cur_r=0;
int col_cnt[100000+10];

struct query
{
    int l;
    int r;
    int id;
    int k;

} qry[100000+10];
int K[100000+10];
bool mo_cmp(query a,query b)
{
    if(a.l/seg==b.l/seg)
        return a.r<b.r;
    return a.l<b.l;
}
void add(int node)
{
    col_cnt[color_1[node]]++;
    K[col_cnt[color_1[node]]]++;
    //  if(col_cnt[color_1[node]]==k)ans++;
}
void del(int node)
{
    //if(col_cnt[color_1[node]]==k)ans--;
    K[col_cnt[color_1[node]]]--;
    col_cnt[color_1[node]]--;

}
void mo(query q)
{

    int l = q.l;
    int r = q.r;
    int k = q.k;
    while(cur_r!=r)
    {
        if(cur_r<r)add(++cur_r);
        else del(cur_r--);
    }

    while(cur_l!=l)
    {
        if(l<cur_l)add(--cur_l);
        else del(cur_l++);
    }
    ans[q.id]=K[k];
    return;
}
void dfs(int node)
{

    vis[node]=1;
    cnt++;
    beg[node]=cnt;
    color_1[cnt]=color[node];



    for(int i=0; i<graph[node].size(); i++)
    {
        int &next=graph[node][i];
        if(vis[next])continue;

        //cnt++;

        dfs(next);



    }
    en[node]=cnt;
    return;
}
int main()
{

    //FAST
    int n,m;
    cin>>n>>m;
    seg=ceil(sqrt(n));
    for(int i=0; i<n; i++)
    {
        cin>>color[i+1];
    }
    for(int i=0; i<n-1; i++)
    {
        int u,v;
        cin>>u>>v;
        graph[u].pb(v);
        graph[v].pb(u);
    }
    memset(vis,0,sizeof(vis));
    dfs(1);
    for(int i=0; i<m; i++)
    {
        int v,k;
        cin>>v>>k;
        qry[i].id=i;
        qry[i].l=beg[v];
        qry[i].r=en[v];
        qry[i].k=k;
    }
    sort(qry,qry+m,mo_cmp);
    cur_r=0;
    cur_l=1;

    for(int i=0; i<m; i++)
    {
        mo(qry[i]);

    }
    for(int i=0; i<m; i++)
    {
        cout<<ans[i]<<"\n";
    }

}
