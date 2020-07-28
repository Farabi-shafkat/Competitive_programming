#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,k;
    cin>>n>>k;
    pair<char,vector<int> >arr[n+10];
    int temp[n+10];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&temp[i]);

    }
    scanf("%c",&arr[0].first);
    arr[0].second.push_back(temp[0]*-1);
    int in=0;
    //char k1;
   // scanf("%c",&k1);
    for(int i=0; i<n; i++)
    {
        char c;
        scanf("%c",&c);
        if(c==arr[in].first)
        {
            arr[in].second.push_back(temp[i]*-1);
        }
        else
        {
            in++;
            arr[in].first=c;
            arr[in].second.push_back(temp[i]*-1);
        }
    }
    long long int sum=0;
    for(int i=0;i<=in;i++)
    {
        //cout<<"lol "<<arr[i].first<<endl;
        if(arr[i].first<'a'||arr[i].first>'z')
            continue;
       // for(int j=0;j<arr[i].second.size();j++)
        //    cout<<arr[i].second[j]<<endl;
        sort(arr[i].second.begin(),arr[i].second.end());
        for(int j=0;j<arr[i].second.size()&&j<k;j++)
            sum+=arr[i].second[j];
    }
    cout<<sum*-1<<"\n";
}
