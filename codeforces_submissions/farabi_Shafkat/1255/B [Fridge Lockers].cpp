#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ff first
#define ss second
#define FAST cin.tie(0); ios_base::sync_with_stdio (false)
#define pii pair<int,int>
#define ARR_MAX 1000000
bool cmp(pii a, pii b)
{
    return a.ss<b.ss;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>n>>m;
        pii arr[n+10];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i].ss;
            arr[i].ff=i+1;
        }
        if(m<n)
        {
            cout<<-1<<"\n";
            continue;
        }
        vector<pii >ans;
        long long sum=0;
        long long num=0;
        if(n==2)
        {
            cout<<-1<<"\n";
            continue;
        }
        for(int i=0; i<n; i++)
        {
            if(i==n-1)
            {
                ans.pb({arr[i].ff,arr[0].ff});
                sum+=arr[i].ss+arr[0].ss;
                num++;
            }
            else
            {
                ans.pb({arr[i].ff,arr[i+1].ff});
                sum+=arr[i].ss+arr[i+1].ss;
                num++;
            }
        }
        sort(arr,arr+n,cmp);
        pii mn_pair= {arr[0].ff,arr[1].ff};
        int min_c=arr[0].ss+arr[1].ss;
        while(num<m)
        {
            num++;
            sum+=min_c;
            ans.pb(mn_pair);
        }
        cout<<sum<<"\n";
        for(int i=0; i<ans.size(); i++)
        {
            cout<<ans[i].ff<<" "<<ans[i].ss<<"\n";
        }
    }
}
