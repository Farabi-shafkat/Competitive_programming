#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    while(k--)
    {
        int n;
        cin>>n;
        int arr[n+1];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];

        }
        sort(arr,arr+n);
        for(int len=1000; len>0; len--)
        {
            int mn=0x3f3f3f3f;
            for(int i=0; i<len; i++)
            {
                mn=min(mn,arr[n-i-1]);
            }
            if(mn>=len)
            {
                cout<<len<<endl;
                break;
            }
        }
    }
}

