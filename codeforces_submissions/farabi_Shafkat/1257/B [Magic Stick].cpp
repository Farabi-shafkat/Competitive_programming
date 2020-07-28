
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ff first
#define ss second
#define FAST cin.tie(0); ios_base::sync_with_stdio (false)
int main()
{
    FAST;
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x==y)
        {
            cout<<"YES\n";
            continue;
        }
        bool yes=0;
        int lasty=-1;
        while(1)
        {
            while(y%3!=0)
            {
                y++;
            }
            if(y==lasty)
            {
                yes=0;
                break;
            }
            lasty=y;

            y=y/3*2;
            if(y<=x)
            {
                cout<<"YES\n";
                yes=1;
                break;
            }

        }
        if(yes==0)
            cout<<"NO\n";
    }

}
