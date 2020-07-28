#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cn=0;
    cin>>n;
    string s;
    cin>>s;
    int x,y,sid;
    if(s[0]=='U')
    {
        x=0;
        y=1;
        sid=0;
    }
    else if(s[0]=='R')
    {
        x=1;
        y=0;
        sid=1;
    }
    for(int i=1; i<n; i++)
    {
        if(s[i]=='U')
        {
            //x=0;
            y++;
            if(y==x+1&&sid==1)
            {
                cn++;
                sid=0;
            }
        }
        else if(s[i]=='R')
        {
            x++;
            if(x==y+1&&sid==0)
            {
                cn++;
                sid=1;
            }
           //y=0;
        }
        //if(x==y+1||y==x+1)
          //  cn++;
         //   cout<<x<< " "<<y<<endl;
    }
    cout<<cn<<endl;

}
