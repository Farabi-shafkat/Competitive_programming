#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n;

    cin>>n>>s;
    int even=0;
    int num=0;
    for(int i=s.size()-1;i>=0;i--)
    {
        if((s[i]-'0')%2==0)
        {
            even++;
           // num+=even;
        }
        //cout<<i<<" "<<even<<" ";
        num+=even;
       // cout<<num<<endl;
    }
    cout<<num;
}
