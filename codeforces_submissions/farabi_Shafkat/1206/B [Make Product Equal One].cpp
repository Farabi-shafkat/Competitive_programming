#include<bits/stdc++.h>
using namespace std;
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(0);
    int n;
    cin>>n;
    long long cost=0;
    long long  zero=0,one=0,neg=0;
    for(int i=0; i<n; i++)
    {
        int in;
        cin>>in;
        if(in>0)
        {
            cost+=in-1;
            one++;
        }
        else if(in==0)
        {
            zero++;
        }
        else
        {
            neg++;
            cost+=-1*in-1;
        }
    }
    if(neg%2==1)
    {
        if(zero>0)
        {
            zero--;
            cost++;
        }
        else
            cost+=2;
    }
    cost+=zero;
    cout<<cost<<endl;


}
