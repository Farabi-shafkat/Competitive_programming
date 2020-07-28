
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ff first
#define ss second
#define FAST cin.tie(0); ios_base::sync_with_stdio (false)
int n;
int arr[200010];

int my_abs(int x)
{
    if(x<0)x=x*-1;
    return x;
}
int main()
{
    FAST;
    int t;
    cin>>t;
    while(t--)
    {

        cin>>n;
        map<int,set<int>>mp;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            mp[arr[i]].insert(i);
        }
        if(n==1){cout<<-1<<"\n";continue;}
        int mn=0x3f3f3f3f;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
           // cout<<it->first<<" "<<it->second.size()<<endl;
            if(it->second.size()>1)
            {
                auto stit=it->second.begin();
                int last=-1;
                while(stit!=it->second.end())
                {
                  //  cout<<last<<" ss "<<*stit<<endl;
                    if(last==-1)last=*stit;
                    else
                    {
                        mn=min(mn,my_abs(*stit-last));
                        last=*stit;
                    }
                    stit++;
                }
            }
        }
        if(mn==0x3f3f3f3f)cout<<-1<<endl;
        else cout<<mn+1<<"\n";

    }

}

