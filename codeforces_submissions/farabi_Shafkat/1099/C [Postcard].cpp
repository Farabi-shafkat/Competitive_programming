#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int k;
    cin>>k;
    int cnt=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]!='?'&&s[i]!='*')
            cnt++;
    }
    string ans="";
    if(cnt>k)
    {
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='?'||s[i]=='*')
            {
                s[i-1]='#';
                cnt--;
            }
            if(cnt==k)
            {
                for(int j=0; j<s.size(); j++)
                {
                    if(s[j]!='?'&&s[j]!='*'&&s[j]!='#')
                        ans+=s[j];
                }
                cout<<ans<<"\n";
                return 0;
            }
        }
        cout<<"Impossible\n";
        return 0;
    }
    else if(cnt<k)
    {
        int x=k-cnt;
        bool f=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='*'&&f==0)
            {
                for(int j=0; j<x; j++)
                {
                    ans+=s[i-1];
                }
                f=1;
            }
            if(s[i]!='*'&&s[i]!='?')
                ans+=s[i];

        }
        if(ans.size()==k)
            cout<<ans<<"\n";
        else
            cout<<"Impossible\n";
        return 0;
    }
    else
    {

        for(int i=0; i<s.size(); i++)
        {
            if(s[i]!='*'&&s[i]!='?')
                ans+=s[i];
        }
        cout<<ans<<"\n";
        return 0;
    }

}
