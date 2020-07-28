#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int it;
    //stack l;
    int l=s.size();
    int c=0;
    for(it=s.size()-1;it!=0;it--)//1202100
    {


        if(s[it]!=s[l-it-1])
        {
          // cout<<s[it]<<"asd "<<s[l-it-1]<<endl<<it<<endl<<l<<endl<<endl;
            if(s[it]=='0'&&c==0)
            {
                //cout<<"here";
               // it--;
                l--;
            }
            else if(s[it]!='0'||c==1)
            {
                cout<<"NO";
                return 0;
            }
        }
        else
            c=1;
        //cout<<c<<"c"<<endl;
    }
    cout<<"YES";
    return 0;


}
