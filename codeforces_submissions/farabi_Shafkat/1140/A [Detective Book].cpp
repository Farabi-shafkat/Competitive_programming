#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[10001];
    bool out[10001];
    memset(out,0,sizeof(out));
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    int d=0;
    int ot=0;
    for(int i=0;i<n;i++)
    {
        ot=max(ot,arr[i]);

        if(i+1==ot)
        {
            d++;
            ot=0;
        }
        //cout<<ot<<" "<<i<<" "<<arr[i]<<endl;
    }
   // d++;
   if(ot!=0)d++;
    cout<<d<<endl;

}
