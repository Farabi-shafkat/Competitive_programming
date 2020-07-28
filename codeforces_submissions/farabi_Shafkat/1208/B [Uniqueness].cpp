#include<bits/stdc++.h>
using namespace std;
int n;
int arr[2001];
void squeeze()
{
    map<int,int>mp;
    int in=1;
    for(int i=0;i<n;i++)
    {
        if(mp[arr[i]]==0){mp[arr[i]]=in;in++;}

    }
    for(int i=0;i<n;i++)
        arr[i]=mp[arr[i]];
}
bool doable(int sz)
{
    for(int s=0; s+sz<=n; s++)
    {
        bool fr[2001];
        memset(fr,0,sizeof(fr));
        bool f=0;
        for(int i=0; i<n; i++)
        {
            //cout<<i <<" "<<s<<" "<<s+sz<<endl;
            if(i>=s&&i<s+sz)continue;
            if(fr[arr[i]]==0)
            {
                fr[arr[i]]=1;
            }
            else
            {
                f=1;
                break;
            }
        }
        if(!f)
        {
            return 1;
        }

    }
    return 0;
}
int main()
{

    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];

    }
    squeeze();
    int l=0,h=n-1;
    int mid;
    while(l<=h)
    {
        mid=(l+h)/2;
      //  cout<<mid<<" ss "<<doable(mid)<<endl;
        if(doable(mid))
        {
            h=mid-1;
        }
        else
            l=mid+1;
    }
    cout<<l<<endl;

}
