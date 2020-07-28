#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    vector<int>vec;
    int x,cnt=0,q=1,l=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);

        for(int j=cnt;j<=cnt+x-1;j++)
        {
            vec.push_back(q);
           // cout<<vec.size()-1<<" "<<vec[vec.size()-1]<<endl;

        }
        q++;
        cnt+=x;
    }
    int m;
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        scanf("%d",&x);
        printf("%d\n",vec[x-1]);
    }
    return 0;
}
