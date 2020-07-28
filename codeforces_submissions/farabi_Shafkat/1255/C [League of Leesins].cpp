#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ff first
#define ss second
#define FAST cin.tie(0); ios_base::sync_with_stdio (false)
#define pii pair<int,int>
#define ARR_MAX 1000000
#define ipv pair<int,vector<int> >
int n;
vector<int> grp[ARR_MAX+10];
map< int, vector<int> >grp_id;
map<int ,int>cnt;
bool grp_cmp(int a ,int b)
{
    return cnt[a]<cnt[b];
}
int find_grp(int n1,int n2,int avoid)
{
    if(n1==-1)
    {
        return grp_id[n2][0];
    }
    for(int id1:grp_id[n1])
    {
        if(avoid==id1)continue;
        for(int elem:grp[id1])
        {
            if(elem==n2)
                return id1;
        }
    }
    return -1;
}
int main()
{

    cin>>n;

    int id=0;
    for(int i=0; i<n-2; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        grp[i].pb(a);
        grp[i].pb(b);
        grp[i].pb(c);
        grp_id[a].pb(i);
        grp_id[b].pb(i);
        grp_id[c].pb(i);
        cnt[a]++;
        cnt[b]++;
        cnt[c]++;

    }
    for(int i=0; i<n-2; i++)
    {
        sort(grp[i].begin(),grp[i].end(),grp_cmp);
    }
    int beg=-1;
    for(auto it=cnt.begin();it!=cnt.end();it++)
    {
        if(it->second==1){
            beg=it->first;
            break;
        }
    }
    int num=1;
    int a=-1,b=beg;
    //cout<<a<<" "<<b<<" "<<"ab"<<endl;
    vector<int>ans;
    ans.pb(beg);
    int avoid=-1;
    while(num!=n)
    {
       // cout<<num<<endl;
        int in=find_grp(a,b,avoid);
        //cout<<in<< " thi "<<a<<" " <<b<<" " <<avoid<<endl;
        int upd1,upd2;
        for(auto it:grp[in])
        {
            if(it!=a&&it!=b){
                ans.pb(it);
                num++;
                if(num==0)
                {
                    upd1=it;
                }
                else
                    upd2=it;
            }
        }
        a=ans[ans.size()-2];
        b=ans[ans.size()-1];
        avoid=in;
       // num++;
    }

    for(auto an:ans)
    {
        cout<<an<<" ";
    }
    cout<<"\n";

}
