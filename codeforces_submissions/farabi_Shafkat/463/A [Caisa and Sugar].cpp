#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s;
    int mx=0,d,c,chk=0;
    scanf("%d%d",&n,&s);
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&d,&c);
        if(d<s)
        {
            if(mx<100-c&&c!=0)
                mx=100-c;
            chk=1;
        }
        else if(d==s&&c==0)
            chk=1;
    }
    if(chk==1)
        cout<<mx;
    else
        cout<<-1;
}
