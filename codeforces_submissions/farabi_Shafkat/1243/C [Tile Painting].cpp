#include<bits/stdc++.h>
using namespace std;
bool is_prim[10000007];
vector<long long>prim;
void sieve()
{
    is_prim[1]=1;
    is_prim[2]=0;
    prim.push_back(2);
    for(long long int i=2; i<=10000001; i++)
    {

        if(is_prim[i]==0)
        {
            prim.push_back(i);
            for(long long int j=i+i; j<=10000001; j+=i)
            {
                is_prim[j]=1;
            }
        }
    }
}
int main()
{

    long long n;
    cin>>n;
    sieve();
    long long int gcd=0;
    for(long long int i=0;i<prim.size();i++)
    {
        if(n%prim[i]==0)
        {
            while(n%prim[i]==0)
            {
                n=n/prim[i];
            }

            gcd=__gcd(gcd,prim[i]);
        }

    }
  // cout<<n<<endl;
    if(n!=1)
    {
        gcd=__gcd(gcd,n);
    }
    if(gcd==0)
    {
        cout<<n<<endl;
    }
    else
        cout<<gcd<<endl;


}

