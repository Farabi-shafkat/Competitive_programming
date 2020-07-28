#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,s;
    cin>>n>>s;
    long long int arr[n];
    long long sum=0;
    long long mn=0x3f3f3f3f;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        mn=min(mn,arr[i]);
    }
    if(sum<s)
    {
        cout<<"-1";
        return 0;
    }
    cout<<min((sum-s)/n,mn);

    //cout<<mn<<endl;
}
