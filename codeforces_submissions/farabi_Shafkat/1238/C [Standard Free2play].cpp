#include<bits/stdc++.h>
using namespace std;
//bool mp[1000000001];
#define FAST  ios_base::sync_with_stdio(false); cin.tie(0);
int main()
{

    FAST

    int q;
    cin>>q;
    int cas=0;
    while(q--)
    {


        int h,n;
        cin>>h>>n;
        int arr[n+100];
        memset(arr,0,sizeof(arr));
        for(int i=0; i<n; i++)
        {
            int num;
            cin>>num;
            arr[i]=num;
        }
        int cost=0;
        int cur=h;
        int ptr=0;
        while(cur!=0)
        {
            if(cur-1==0||cur-2==0)break;

            // if(mp.find(cur-1)==mp.end())

            if(arr[ptr+1]!=cur-1&&arr[ptr+1]==cur-2)
            {
                cur--;
            }
            else if(arr[ptr+1]==cur-1&&arr[ptr+2]==cur-2)
            {


                //else if(arr[ptr+2]==cur-2)
                ptr+=2;
                cur-=2;
            }
            else if(arr[ptr+1]==cur-1&&arr[ptr+2]!=cur-2)
            {
                cost++;
                ptr++;
                cur-=2;
            }
            else
            {
                cost++;
                // auto it=mp.lower_bound(cur);
              //    cout<<cur<<" bal incre "<<ptr<<endl;
                while(arr[ptr]>=cur)
                {
                    ptr++;
                }
                //it--;

                cur=arr[ptr];
                if(cur==0||cur==1)
                {
                    cost--;
                    break;
                }
                if(arr[ptr+1]==cur-1){
                        cost--;
                        ptr++;
                        cur--;
                }

            }


        //   cout<<cur<<" bal "<<ptr<<endl;
        }
        cas++;
      // cout<<"case "<<cas<<" :"<< cost<<"\n";
       cout<<cost<<endl;

    }


}
