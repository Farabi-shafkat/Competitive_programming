#include<bits/stdc++.h>
using namespace std;
long long int arr[2*100001];
int main()
{
    //string s;
    int n;

    cin>>n;
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);

    }
    long long int t=0,prev;
    t+=arr[n-1];
    prev=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        if(min(arr[i],prev-1)<=0)break;
        t+=min(arr[i],prev-1);
        prev=min(arr[i],prev-1);
       // cout<<t<<" "<<prev<<endl;
    }
    cout<<t;
}
