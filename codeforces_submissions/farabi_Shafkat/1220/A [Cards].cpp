#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    map<char,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[str[i]]++;

    }
    int one=0,zero=0;
    while(mp['o']&&mp['n']&&mp['e'])
    {
        one++;
        mp['o']--;
        mp['n']--;mp['e']--;

    }
    while(mp['z']&&mp['e']&&mp['r']&&mp['o'])
    {
        zero++;
        mp['z']--;mp['e']--;mp['r']--;mp['o']--;
    }
    while(one--)
    {
        cout<<"1 ";
    }
    while(zero--)
    {
        cout<<"0 ";
    }
}
