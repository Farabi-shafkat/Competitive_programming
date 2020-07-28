#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        string s;
        cin>>n>>s;
        bool b=1;
        for(int i=0;i<n/2;i++)
        {
            if(s[i]!=s[n-1-i]&&s[i]+1!=s[n-1-i]-1&&s[i]-1!=s[n-1-i]+1)
            {
                cout<<"NO\n";
                b=0;
                break;
            }


        }
        if(b==1)
            cout<<"YES\n";
    }
}
