#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    deque<int>dq;
    set<int>ids;
    for(int i=0;i<n;i++)
    {
        int id;
        cin>>id;
        if(ids.find(id)!=ids.end())continue;

        if(dq.size()>=k)
        {
            ids.erase(dq.back());

            dq.pop_back();

            dq.push_front(id);
            ids.insert(id);

        }
        else
        {
            dq.push_front(id);
            ids.insert(id);
        }
    }
    cout<<dq.size()<<"\n";
    for(auto it=dq.begin();it!=dq.end();it++)
    {
        cout<<*it<<" ";
    }
}
