#include<bits/stdc++.h>
using namespace std;
int cil(int a,int b)
{
    int ret=a/b;
    if(ret*b<a)
        ret++;
    return ret;
}
int main()
{
    int n,k;
    cin>>n>>k;
    int x=n%(k+k+1);
    if(x==0||(x>=(k+1)&&x<=(k+k+1)))
    {
       // cout<<"eita?"<<endl;
        int t=cil(n,k+k+1);
        cout<<t<<"\n";
        for(int i=0;i<t;i++)
        {
            cout<<k+1+i*(k+k+1)<<" ";
        }
    }
    else if(x>=1&&x<=k)
    {
        int t=cil(n,k+k+1);
        cout<<t<<"\n";
        int ans=1;
        cout<<ans<<" ";
        for(int i=1;i<t;i++)
        {
            ans+=k+k+1;
            cout<<ans<<" ";
        }
    }
}
