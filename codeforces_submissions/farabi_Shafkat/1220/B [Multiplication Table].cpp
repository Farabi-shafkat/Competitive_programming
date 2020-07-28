#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
   if (b == 0)
      return a;
   return gcd(b, a % b);
}
int main()
{
    int n;
    cin>>n;
    long long arr[n+1][n+1];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
   // cout<<"test";
    long long  orig[n+1];
   // cout<<"test@"<<endl;
   //cout<<"asnasn";
   int i=0;
   orig[i]=(arr[i+1][i]*arr[i+2][i])/arr[i+2][i+1];
   orig[0]=sqrt(orig[0]);
   cout<<orig[0]<<" ";
    for(int i=1;i<n;i++)
    {


           // cout<<arr[i][0]<<" "<<orig[0]<<endl;
            orig[i]=arr[i][0]/orig[0];

        cout<<orig[i]<<" ";
    }

}
