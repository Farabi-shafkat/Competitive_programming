#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,q;
    cin>>n>>q;
    for(int i=0; i<q; i++)
    {
        long long x,y;
        cin>>x>>y;
        long long num;
        if((x+y)%2==0)
        {
            num=((x-1)/2)*n;
            if(x%2==1)
            {
                num+=(y-1)/2+1;
            }
            else
            {
                int an=n/2;
                if(n%2==1)
                    an++;
                num+=an+y/2;
            }
        }
        if((x+y)%2==1)
        {
            num=((x-1)/2)*n;
            if(x%2==1)
            {
                num+=(y-2)/2+1;

            }
            else
            {
                int an=n/2;

                num+=an+(y-1)/2+1;
            }
            //cout<<"lol "<<num<<endl;
            num+=(long long)ceil(n*n/2.0);
        }

        printf("%lld\n",num);
    }
}
