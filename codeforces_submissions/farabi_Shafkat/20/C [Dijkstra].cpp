#include<bits/stdc++.h>
using namespace std;
struct gdata
{
    int node,distance;
};
bool operator<(gdata a,gdata b)
{
    return a.distance>b.distance;
}
int main()
{
    int n,m;
    //cin>>n>>m;
    scanf("%d%d",&n,&m);
    int par[n];
    long long dis[n];
    vector< pair<int,int> >graph[n];
    for(int i=0;i<m;i++)
    {
        int u,v,wt;
        //cin>>u>>v>>wt;
        scanf("%d%d%d",&u,&v,&wt);
        graph[u-1].push_back( make_pair(v-1,wt));
        graph[v-1].push_back( make_pair(u-1,wt));
    }
    priority_queue<gdata>q;
    vector< pair< int ,int > >::iterator it;
    gdata gu,lu;
  //  int n,m;

    //for(int i=0;i<n;i++)
      //  dis[i]=99999999;
    memset(dis,0x3f,sizeof(dis));
    //int x=0x3f3f3f3f;
    //cout<<"   sdasdsad "<<x<<endl;
    gu.node=0;
    gu.distance=0;
    dis[gu.node]=0;
    par[gu.node]=0;
    q.push(gu);
    //cout<<endl;
    while(!q.empty())
    {
        gu=q.top();
        q.pop();
        for(it=graph[gu.node].begin();it!=graph[gu.node].end();it++)
        {
            if(dis[(*it).first]>dis[gu.node]+(*it).second)
            {
                dis[(*it).first]=dis[gu.node]+(*it).second;
               // cout<<dis[(*it).first]<<" distance "<<gu.node<<" "<<(*it).first<<endl;
                lu.node=(*it).first;
                par[(*it).first]=gu.node;
                lu.distance=dis[(*it).first];
                q.push(lu);
                //gdata bal;
                //bal=q.front();
              //  cout<<bal.node+1<<" "<<bal.distance<<" "<<(*it).second<<endl;
            }
        }
        //q.pop();
       // cout<<q.empty()<<endl;
    }
   // cout<<endl<<dis[n-1]<<endl;
    if(dis[n-1]==4557430888798830399)
        printf("%d",-1);
    else
    {
        stack<int>out;
        int pr=n-1;
        while(pr!=0)
        {
            out.push(pr);
            pr=par[pr];
        }
        out.push(0);
        while(!out.empty())
        {
            printf("%d ",out.top()+1);
            out.pop();

        }
    }

}
