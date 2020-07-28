#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int> >meat;//amn,cst
    for(int i=0;i<n;i++)
    {
        int a,p;
        scanf("%d%d",&a,&p);
        meat.push_back(make_pair(a,p));
    }
    int amt=0,cost=0,taka=0;
    if(n==1)
    {
        cout<<meat[0].second*meat[0].first;
        return 0;
    }

    for(int i=1;i<n;i++)
    {
       // cout<<meat[i].first<<" "<<meat[i].second<<endl;
        if(meat[i].second>=meat[taka].second)
        {
            amt+=meat[i-1].first;
           // cout<<" amt " <<amt<<endl;
            if(i==n-1)
            {
                amt+=meat[i].first;
                cost+=amt*meat[taka].second;
            }
        }
        else if(meat[i].second<meat[taka].second)
        {
            amt+=meat[i-1].first;
            cost+=amt*meat[taka].second;
          //   cout<<" amt " <<amt<<" cots "<<cost<<endl;
            if(i==n-1)
            {
                cost+=meat[i].first*meat[i].second;
            }
            amt=0;
            taka=i;

        }
    }
    cout<<cost<<endl;
}
/*
5
39 21
95 89
73 90
9 55
85 32

6321
*/
