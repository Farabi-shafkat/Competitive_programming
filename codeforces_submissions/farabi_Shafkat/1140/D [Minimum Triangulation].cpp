#include<bits/stdc++.h>
using namespace std;
pair<long long,long long>pii[3*100002];
bool comp(pair<long long,long long>a,pair<long long,long long>b)
{
    if(a.first*a.second>b.first*b.second)

    return a.first*a.second>b.first*b.second;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    long long sum=0;
    for(int i=2;i<n;i++)
        sum+=i*(i+1);
    cout<<sum<<endl;
   // main();

}
