#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        //int arr[n+10];
        int sum=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            sum+=a;
        }
        sum=ceil(sum*1.0/n);
        cout<<sum<<"\n";

    }
}
