#include<bits/stdc++.h>
using namespace std;
int ab(int num)
{
    if(num<0)return -1*num;
    return num;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long int mn=0x3f3f3f3f;

    for(int i=0;i<100;i++)
    {
        long long int elc=0;
        for(int j=0;j<n;j++)
        {
            elc+=(ab(i-j)+j-0+i+i+j+ab(i-j))*arr[j];
        }
        if(elc<mn)mn=elc;
    }
    cout<<mn<<endl;
}
