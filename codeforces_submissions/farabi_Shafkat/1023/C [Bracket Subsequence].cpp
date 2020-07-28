#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    stack<pair<char,int> > st;
    bool arr[n];
    memset(arr,0,sizeof(arr));
    //cin>>n>>k>>s;
    int num=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='(')
            st.push(make_pair(s[i],i));
        else if(s[i]==')')
        {
            if(st.top().first=='(')
            {
                arr[i]=1;
                arr[st.top().second]=1;
                st.pop();
                //an.push();
                num+=2;
            }
            if(num==k)
                break;

        }
    }
   // cout<<num<<"<==="<<endl;
    for(int i=0; i<s.size(); i++)
    {
        if(arr[i]==1)
            cout<<s[i];
    }

}
