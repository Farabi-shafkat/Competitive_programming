#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,b;
    cin>>n>>b;
    long long int mx_d=-1;
    vector<long long int>pr;
    vector<long long int>fr;
    for(long long int i=2; i*i<=b; i++)
    {
        if(b%i==0)
        {
            // mx_d=i;
            pr.push_back(i);
           // long long m=(long long)(log(b)/log(i));
            long long m=0;



            while(b%i==0)
            {
                b/=i;
                m++;

               // cout<<b<<" "<<i<<" "<<m<<endl;
            }
            fr.push_back(m);
        }
    }
    // cout<<"etodur"<<endl;
    if(b!=1)
    {
        pr.push_back(b);
        fr.push_back(1);
    }
    /*5for(int i=0;i<pr.size();i++)
    {
        cout<<pr[i]<<" "<<fr[i]<<endl;
    }*/
    //long long m=(long long)(log(b)/log(mx_d));
    long long ans=0;
    long long man=0x3f3f3f3f3f;
    for(long long int i=0; i<pr.size(); i++)
    {
        ans=0;
        long long int s=n;
        while(s>0)
        {
           // cout<<s<<" ss "<<pr[i]<<endl;
            s=s/pr[i];
            ans+=s;
          //  cout<<ans<<" ans"<<endl;
        }

        ans=ans/fr[i];
            if(i==0)man=ans;
        else
            man=min(man,ans);
    }
    cout<<man<<endl;
   // main();
}
