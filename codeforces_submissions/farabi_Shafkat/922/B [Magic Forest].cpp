
#include<bits/stdc++.h>
using namespace std;
bool crcl(long long a,long long b,long long c)
{
    //long long arr[3];
    if(a+b>c&&a+c>b&&b+c>a)
        return 1;
    return 0;
}
int main()
{
    long long n;
    cin>>n;
    long long a,b;
    a=1;
    b=n;
    long long an=0;
    for(; a<=n; a++)
    {
        for(b=a+1; b<=n; b++)
        {
            if((a^b)<=n&&(a^b)>a&&(a^b)>b&&crcl(a,b,(a^b)))
              {
                    an++;
                   // cout<<a<<" "<<b<<" "<<(a^b)<<endl;
              }
            //a++;
            //b--;
           // cout<<a<<" "<<b<<endl;
        }
    }

    cout<<an<<endl;
}
