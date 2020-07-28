#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ch[26];
    memset(ch,0,sizeof(ch));
    for(int i=0;i<n;i++)
    {
        ch[s[i]-'a']++;
    }
    int num1=0,num2=0;
    for(int i=0;i<26;i++)
    {
        if(ch[i]==s.size())
        {
            cout<<"Yes"<<endl;
            return 0;
        }
        if(ch[i]==1)
            num1++;
        else if(ch[i]!=0)
            num2++;
    }
    if(num2>=1 )
    {
        printf("Yes\n");

    }
    else
        cout<<"No\n";


}
