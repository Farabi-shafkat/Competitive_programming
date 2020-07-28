#include<bits/stdc++.h>
using namespace std;
bool all_sm=1;
bool is_pal(string s)
{
    for(int i=0; i<=s.size()-1-i; i++)
    {
        if(i!=0&&s[i]!=s[i-1])all_sm=0;
        if(s[i]!=s[s.size()-1-i])
            return 0;
    }
    return 1;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        string s;
        cin>>s;
        if(s.size()==1)
        {
            cout<<-1<<"\n";
            continue;
        }
        all_sm=1;
        if(!is_pal(s))
            cout<<s<<"\n";
        else if(all_sm)cout<<-1<<"\n";
        else
        {
            for(int i=0;i+i<=s.size()-1;i++)
            {
                if(s[i]!=s[0])
                {

                    char c=s[0];
                    s[0]=s[i];
                    s[i]=c;
                    break;
                    //swap(s[i],s[0]);
                }
            }
            cout<<s<<"\n";
        }
    }
}
