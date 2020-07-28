#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ff first
#define ss second
#define FAST cin.tie(0); ios_base::sync_with_stdio (false)
#define pii pair<int,int>
#define ARR_MAX 1000000

int main()
{
    int a,b;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        int coin=0;
        int dif=a-b;
        if(dif<=0)dif*=-1;
        while(dif>=5)
        {
            coin+=dif/5;
            dif=dif%5;
        }
        while(dif>=2)
        {
            coin+=dif/2;
            dif=dif%2;
        }
        if(dif>=1)
        {
            coin+=dif;

        }
        cout<<coin<<"\n";
    }
}
