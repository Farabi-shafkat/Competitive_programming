#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long l,r;
   cin>>l>>r;
   long long ans=l^r;
   long long a=0;
   while(ans>0)
   {
       a=a<<1;
       a=a|1;
       ans=ans>>1;
      // cout<<ans<<endl;
   }
   cout<<a<<endl;
}