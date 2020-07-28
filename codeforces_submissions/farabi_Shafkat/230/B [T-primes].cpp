#include<bits/stdc++.h>
using namespace std;
bool sieve[1000001];
int main()
{
    //sieve;
    vector<long long>plist;
    sieve[0]=1;
    sieve[1]=1;
    for(long long i=2; i<1000001; i++)
    {
        if(!sieve[i])
        {
            plist.push_back(i);
            for(long long j=i+i; j<1000001; j+=i)
            {
                sieve[j]=1;
            }
        }
    }
    // for(long long i=0;i<plist.size();i++)
    //   cout<<plist[i]<<endl;
    //endof sieve;
    int n;
    long long x;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%I64d",&x);
        //cout<<x<<endl;
        //srch;
        long long int l,h,mid,c=0;
        long long t;
        l=0;
        h=plist.size()-1;
        //cout<<l<<" "<<h<<endl;
        while(h>=l)
        {
            mid=(h+l)/2;

            t=plist[mid];
           // cout<<t<<" ptrm"<<endl;
            t=t*t;
            //printf("%lld %lld\n",t,mid);
            if(t==x)
            {
                printf("YES\n");
                c=1;
                break;
            }
            else if(t<x)
            {
                l=mid+1;
            }
            else if(t>x)
            {
                h=mid-1;
            }
        }
        if(c==0)
            printf("NO\n");

    }


}
