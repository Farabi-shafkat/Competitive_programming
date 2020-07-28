#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>cost;
bool comp(long long int a,long long int b)
{
    return cost[a]<cost[b];
}
int main()
{
    long long  n,m,k;
    scanf("%lld%lld%lld",&n,&k,&m);
    map<string,long long int>arr;
    for(long long int i=0; i<n; i++)
    {
        char str[22];
        scanf("%s",str);
        arr[str]=i;
    }

    map<long long int,long long int>grp_map;
    for(long long int i=0; i<n; i++)
    {
       long long  int t;
        scanf("%lld",&t);
        cost[i]=t;
    }
    vector<long long int>grp[k];
    for(long long int i=0; i<k; i++)
    {
        long long int t,x;
        scanf("%lld",&x);
        for(long long int j=0; j<x; j++)
        {
            scanf("%lld",&t);
            grp[i].push_back(t-1);
            grp_map[t-1]=i;
        }
        sort(grp[i].begin(),grp[i].end(),comp);
         // for(long long int k=0;k<grp[i].size();k++)
          //cout<<grp[i][k]<<" sdsd"<<endl;
    }
    long long  ttl=0;
   // cout<<"exirt"<<endl;
    for(long long int i=0; i<m; i++)
    {
        char str[22];
        scanf("%s",str);
       //   cout<<cost[grp[grp_map[arr[str]]][0]]<<" "<<arr[str]<<" "<<grp_map[arr[str]]<<" "<<grp[grp_map[arr[str]]][0]<<endl;
        ttl+=cost[grp[grp_map[arr[str]]][0]];
    }
    cout<<ttl<<endl;
}
