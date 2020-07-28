#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n;
    cin>>n;
    double x=sqrt(n);
    double s=floor(x);
    if(n-s*s<=s)
        cout<<ceil(x)+floor(x);
    else
        cout<<2*ceil(x);

}
