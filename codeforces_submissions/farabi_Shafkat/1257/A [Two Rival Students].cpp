
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ff first
#define ss second
#define FAST cin.tie(0); ios_base::sync_with_stdio (false)
int main()
{
    FAST;
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,a,b;
        cin>>n>>x>>a>>b;
        if(b<a)swap(a,b);
        int dis=b-a;
        cout<<min(dis+x,dis+(a-1)+(n-b))<<endl;
    }

}
