#include<bits/stdc++.h>
using namespace std;
int ab(int num)
{
    if(num<0)
        num*=-1;
    return num;
}
int f(char a1,char b1)
{
    char a=a1,b=b1;
    int ret=0,ret2=0;
    if(a1==b1)return 0;
    while(1)
    {
       // cout<<a<<" "<<b<<" "<<ret<<endl;
           if(a==b)break;
        if(a=='Z')
            a='A';
        else
            a++;

        ret++;

    }
    a=a1,b=b1;
    while(1)
    {
      //  cout<<a<<" "<<b<<" "<<ret<<endl;
            if(a==b)break;
        if(a=='A')
            a='Z';
        else
            a--;

        ret2++;

    }
    if(ret==0)return ret2;
    if(ret2==0)return ret;
    return(min(ret,ret2));
}
int main()
{

    int n;
    cin>>n;
    string s;
    string ch="ACTG";
    cin>>s;
    int mn=500000;
    for(int j=0; j<n-3; j++)
    {
        int num=0;
        //  string ch2=""
        // cout<<s[j]<<endl;


       /* int a=min(ab(s[j]-'A'),ab('Z'-s[j])+1);
        int b=min(ab(s[j+1]-'C'),ab('Z'-s[j+1])+'C'-'A'+1);
        int c=min(ab(s[j+2]-'T'),ab('Z'-s[j+2])+'T'-'A'+1);
        int d=min(ab(s[j+3]-'G'),ab('Z'-s[j+3])+'G'-'A'+1);*/
        int a=f(s[j],'A');
        int b=f(s[j+1],'C');
        int c=f(s[j+2],'T');
        int d=f(s[j+3],'G');
    //     cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
        num=a+b+c+d;

        mn=min(mn,num);
    }
    cout<<mn<<endl;

}
