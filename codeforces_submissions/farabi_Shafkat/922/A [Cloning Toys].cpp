
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int  x,y;
    cin>>x>>y;
    if(x==0&&y==1)
    {
        cout<<"yes";
        return 0;
    }
    else if(x==0)
    {
        cout<<"no";
        return 0;
    }
    if(y==0)
    {
        cout<<"no";
        return 0;

    }
    if(y==1&&x!=0)
    {
        cout<<"no";
        return 0;
    }
    y--;

    x-=y;
    if(x<0)
    {
        cout<<"no";
        return 0;
    }
    if(x%2==0)
    {
        cout<<"yes"<<endl;
        return 0;
    }

    cout<<"no";
    return 0;
}
