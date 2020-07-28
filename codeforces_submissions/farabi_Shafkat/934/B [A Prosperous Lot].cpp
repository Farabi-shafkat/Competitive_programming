#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,in=0;
    cin>>k;
    string num;//[19];
//    memset(num,'0',sizeof(num));
    //num[18]='\0';
    //int in;
    if(k%2==0)
    {
         in=0;
        for(int i=1;i<=k;i+=2)
        {
            num+='8';
            //cout<<i<<' '<<num[in]<<endl;
           in++;



        }
    }
    else
    {
        int i;
         in=0;
        for(i=1;i<=k-1;i+=2)
        {
            num+='8';
            in++;
        }

        num+='4';
        in++;
    }
    //cout<<st<<endl;;
    //cout<<"2 "<<num[1]<<endl
    if(num.size()>18)
        cout<<"-1";
    //num[in]='\0';
    else
        cout<<num;

}
