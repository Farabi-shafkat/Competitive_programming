#include<bits/stdc++.h>
using namespace std;
bool is[100001];
int main()
{

    int q;
    scanf("%d",&q);
    while(q--)
    {
        int n,r;
        scanf("%d%d",&n,&r);
        //  set<int>arr;
        memset(is,0,sizeof(is));
        int arr[n+10];
        int ind=0;
        for(int i=0; i<n; i++)
        {
            int num;
            scanf("%d",&num);

            //arr.insert(num);
            if(!is[num])
            {
                arr[ind]=num;
                is[num]=1;
                ind++;
            }
        }
        sort(arr,arr+ind);
        //  auto it=arr.end();
        //  it--;
        long long val=0;
        int time=0;
        // while(it!=arr.begin())
        for(int i=ind-1; i>=0; i--)
        {
            if(arr[i]-val>0)
            {
                val+=r;
                time++;

            }
        }
        printf("%d\n",time);
    }
}
