
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ff first
#define ss second
#define FAST cin.tie(0); ios_base::sync_with_stdio (false)
#define pii pair<int,int>
#define ARR_MAX 1000000
int mons[2*ARR_MAX+10];
pii hero[2*ARR_MAX+10];
map<int,int>endur;
bool cmp(pii a,pii b)
{
    if(a.ss==b.ss)return a.ff>b.ff;
    return a.ss>b.ss;
}
int main()
{
     FAST;
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        endur.clear();
        for(int i=0; i<n; i++)
        {
            cin>>mons[i];
        }
        int m;
        cin>>m;
        for(int i=0; i<m; i++)
        {
            cin>>hero[i].ff>>hero[i].ss;
        }
        sort(hero,hero+m,cmp);
        int prev=-1;
        for(int i=0; i<m; i++)
        {
            if(i==0||hero[i].ss!=hero[i-1].ss)
            {
                endur[hero[i].ss]=max(hero[i].ff,prev);
                prev=max(hero[i].ff,prev);
            }
        }
        set<int>keys;
        for(auto it=endur.begin(); it!=endur.end(); it++)
        {
            // cout<<it->ff<<" set stuff"<<endl;
            keys.insert(it->ff);
        }
        int days=0;
        for(int i=0; i<n;)
        {

            int mx=-1;
            int k=0;
            for(int j=i; j<n; j++)
            {
                //cout<<i<<" "<<j<<endl;
                int e=j-i+1;
                mx=max(mx,mons[j]);
                auto set_it=keys.lower_bound(e);

                if(set_it==keys.end())
                {
                    //   cout<<"hapenning"<<endl;
                    i=j;
                    break;
                }
                //  cout<<*set_it<<" this "<<endur[*set_it]<<" "<<mx <<endl;
                if(endur[*set_it]>=mx)
                {
                    k=e;

                }
                else
                {
                    i=j;
                    break;
                }
                if(j==n-1)i=n;
            }
            // cout<<"eituku"<<" "<<k<<endl;
            if(k==0)
            {
                days=-1;
                break;
            }

            days++;
        }
        cout<<days<<"\n";

    }
}
