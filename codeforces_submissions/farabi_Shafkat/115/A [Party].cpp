#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    vector<int>graph[n];
    vector<int>source;
    for(int i=0; i<n; i++)
    {
        int p;
        scanf("%d",&p);
        if(p==-1)
        {
            source.push_back(i);
            continue;
        }
        graph[p-1].push_back(i);
    }
    queue<int>q;
    int level[n];
    bool visited[n];
    memset(visited,0,sizeof(visited));
    vector<int>::iterator it1,it2;
    int s,u,mx=0;
    for(it1=source.begin();it1!=source.end();it1++)
    {
        s=*it1;
        visited[s]=1;
        level[s]=0;
        q.push(s);
        while(!q.empty())
        {
            u=q.front();
            q.pop();
            for(it2=graph[u].begin();it2!=graph[u].end();it2++)
            {
                if(!visited[*it2])
                {
                    visited[*it2]=1;
                    level[*it2]=level[u]+1;
                    if(level[*it2]>mx)
                        mx=level[*it2];
                    q.push(*it2);
                }
            }
        }


    }
    cout<<mx+1;

}
