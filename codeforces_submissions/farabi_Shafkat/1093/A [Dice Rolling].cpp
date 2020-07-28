#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int num;
        cin>>num;
        if(num%2==0)
            cout<<num/2<<"\n";
        else
            cout<<((num-3)/2)+1<<"\n";
    }
}
