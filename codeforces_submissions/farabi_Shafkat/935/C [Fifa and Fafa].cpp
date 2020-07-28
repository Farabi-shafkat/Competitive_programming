#include<bits/stdc++.h>
using namespace std;
int main()
{
    double r,R,x1,x2,y1,y2;
    cin>>R>>x1>>y1>>x2>>y2;
    double dis;
    dis=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));

    //if(abs(R-dis)<.0000001||dis>R)
    if(dis>=R)
    {
        printf("%.6lf %.6lf %.6lf",x1,y1,R);
        return 0;
    }
    r=dis+R;
    // r=r/2;
    // cout<<r<<" r"<<endl;
    //search
    //pair<double,double>h,l,mid;
    //if()
    double x,y;
    if(dis==0)
    {
        y=y1;
        x=x1-r/2;
    }
    else
    {


        x=(-x2*R+r*x1)/dis;
        y=(-y2*R+r*y1)/dis;
        x=(x+x2)/2;
        y=(y+y2)/2;
    }
    //cout<<x<<" "<<y<<endl;
    printf("%.6lf %.6lf %.6lf",x,y,r/2);

}
