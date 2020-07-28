#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n;
    priority_queue<int>q;
    int p=n;
    for(int i=n;i>=0;i--)
    {
        scanf("%d",&t);
       // cout<<t<<" in "<<q.size()<<endl;
        q.push(t);
        if(q.top()==p)
        {
            p--;
            t=q.top();
            printf("%d ",t);
            q.pop();
            //q.pop();
            if(q.size()==0)
            {
                printf("\n");
                continue;
            }
           // cout<<q.top()<<"s"<<endl;
          //  q.pop();
            //cout<<q.top()<<"ss"<<endl;
            while(q.top()==p)
            {
                t=q.top();
                //cout<<"t : "<<t<<endl;
                p--;
              //  q.pop();
               // if(q.size()==1)cout<<"bal"<<endl;
                q.pop();
               // cout<<"rp "<<q.top()<<" "<<q.size()<<endl;
                printf("%d ",t);
            }
            //while(q.fornt())
        }
        printf("\n");
    }
}
