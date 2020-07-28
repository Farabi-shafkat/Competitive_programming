#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,k;
    cin>>b>>k;
    vector<int>kv;
    int ans=0;
    long long pow=1;
    for(int i=0;i<k;i++)
    {
        int t;
        scanf("%d",&t);

        kv.push_back(t);
    }
    for(int i=kv.size()-1;i>=0;i--)
    {
        ans+=((pow%2)*(kv[i]%2))%2;
        pow=((pow%2)*(b%2))%2;
    }
    if(ans%2==0)cout<<"even";
    else cout<<"odd";

}
