#include<bits/stdc++.h>
using namespace std;
#define md 1000000007

long long powr(long long exp)
{
    if(exp==1)return 2;
    if(exp%2==0)
    {
        long long ret=(powr(exp/2))%md;
        ret=(ret*ret)%md;
        return ret;
    }
    long long ret=powr(exp/2)%md;
    ret=(ret*ret*2)%md;
    return ret;
}
int main()
{
    string s;
    cin>>s;
    long long mul=1;
    string s1="";
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='a'||s[i]=='b')
            s1+=s[i];
    }
    s1+='b';
    long long st=1;
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]=='b')
        {
            mul=((mul)*(st%md))%md;
            st=1;
        }
        else if(s1[i]=='a')
        {
            st++;
        }
    }
    mul=(mul-1);
    if(mul<0)
        mul+=md;
    cout<<mul;

}
