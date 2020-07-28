#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int>a,pair<int,int>b)
{
    return a.first<b.first;
}
int main()
{
    int t;
    cin>>t;
    //scanf("%d")

    for(int i=0; i<t; i++)
    {
        int sides[10001],u1,u2;
        int s[10001];
        int in=0,ans;
        memset(sides,0,sizeof(sides));
        int n;
        bool c=0;
        scanf("%d",&n);
        for(int i=0; i<n; i++)
        {
            int u;
            scanf("%d",&u);
            sides[u]++;
            if(sides[u]==2)
                s[in++]=u;
            else if(sides[u]==4)
                {
                    ans=u;
                    c=1;
                }

        }

        if(c==1)
        {
                printf("%d %d %d %d\n",ans,ans,ans,ans);
                continue;

        }
        double mn=0x3f3f3f3f3f3f3f;
        //int u1,u2;
        sort(s,s+in);


        for(int i=0; i<in; i++)
        {
            int u;
            //scanf("%d",&u);
            //cout<<s[i].first<<" "<<s[i].second<<endl;

            double mn1;
            double s1,s2;
            if(i!=0)
            {
                s1=(double)s[i];
                s2=(double)s[i-1];
                mn1=4*(s1+s2)*(s1+s2)/(s1*s2);

                if(mn1<mn)
                {
                    u1=s[i];
                    u2=s[i-1];
                    mn=mn1;
                }
            }


        }
        //  u1=s[u1];
        //  u2=s[u2];
        if(c==0)
            printf("%d %d %d %d\n",u1,u1,u2,u2);

    }
}
