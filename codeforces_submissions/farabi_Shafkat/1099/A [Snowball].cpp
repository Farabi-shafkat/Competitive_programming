#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w,h,u1,d1,u2,d2;
    cin>>w>>h>>u1>>d1>>u2>>d2;
    while(h>=0)
    {
        if(h==d1)
        {
            w-=u1;
        }
        else if(h==d2)
        {
            w-=u2;
        }

        w+=h;
        h--;
        if(w<0)w=0;
    }
    cout<<w<<endl;

}
