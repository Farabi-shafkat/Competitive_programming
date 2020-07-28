#include<bits/stdc++.h>
using namespace std;

int main()
{
   int x,y,z;
   cin>>x>>y>>z;
   int g,p,b;
   cin>>g>>p>>b;
   bool bl=1;
   g=g-x;
   if(g<0)bl=0;
   if(g+p<y)bl=0;
   int tot=g+p-y+b-z;
   if(tot<0)bl=0;
   if(bl==1)cout<<"YES\n";
   else cout<<"NO\n";

}
