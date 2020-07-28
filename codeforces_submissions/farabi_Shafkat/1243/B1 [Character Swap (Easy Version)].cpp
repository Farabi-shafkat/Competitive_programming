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
        string s1,s2;
        cin>>s1>>s2;
        int i;
        if(s1==s2)
        {
            cout<<"Yes\n";
            continue;
        }
        char a1='?',a2='?',b1='?',b2='?';
        for( i=0; i<s1.size(); i++)
        {
            if(s1[i]!=s2[i])
            {
                if(a1=='?'&&b1=='?')

                {
                    a1=s1[i];
                    b1=s2[i];
                }
                else  if(a2=='?'&&b2=='?')

                {
                    a2=s1[i];
                    b2=s2[i];
                }
                else
                {
                    cout<<"No\n";
                    break;
                }
            }


        }
        if(i==s1.size())
        {
            if(a1==a2&&b1==b2)
            {
                cout<<"Yes\n";
            }
            else
                cout<<"No\n";
        }
    }
}



