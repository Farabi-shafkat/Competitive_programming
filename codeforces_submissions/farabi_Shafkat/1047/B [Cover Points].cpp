#include<bits/stdc++.h>
using namespace std;
bool comp(pair<long long int,long long int>a,pair<long long int,long long int>b)
{
    long long int ap=a.first+a.second;
    long long int bp=b.first+b.second;
    if(ap==bp)
    {
        return max(a.first,a.second)>max(b.first,b.second);
    }
    return ap>bp;
}
int main()
{
    int n;
    cin>>n;
    vector<pair<long long int,long long int> >xy;
    for(int i=0;i<n;i++)
    {
        long long int x,y;
        cin>>x>>y;
        xy.push_back(make_pair(x,y));
    }
    sort(xy.begin(),xy.end(),comp);
    cout<<xy[0].first+xy[0].second;
}