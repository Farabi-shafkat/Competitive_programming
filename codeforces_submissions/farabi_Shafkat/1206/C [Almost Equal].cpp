#include<bits/stdc++.h>
using namespace std;
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(0);

    int n;
    cin>>n;
    vector<int>vec1,vec2;
    int turn=0;
    vec1.push_back(1);
    turn=1;
    for(int i=2; i<=n+n; i++)
    {
        if(turn ==0)
        {
            vec1.push_back(i);
            i++;
            if(i>=n+n)break;
            vec1.push_back(i);
            i++;
            turn=1;
        }
        if(turn ==1)
        {
            vec2.push_back(i);
            i++;
            if(i>=n+n)break;
            vec2.push_back(i);
            turn=0;
        }
    }

    for(int i=0; i<vec2.size(); i++)
    {
        vec1.push_back(vec2[i]);
    }
    for(int i=0; i<n-1; i++)
    {
        vec1.push_back(vec1[i]);
    }

    // cout<<endl;
    map<long long,bool>mp;
    long long temp=0;
    for(int i=0; i+n<=vec1.size(); i++)
    {

        if(i==0)
        {
            for(int j=0; j<n; j++)
                temp+=vec1[j];
        }
        else
        {
            temp-=vec1[i-1];
            temp+=vec1[i+n-1];
        }
        // cout<<temp<<" temnp "<<vec1[i-1]<<" "<<vec1[i+n-1]<<endl;
        mp[temp]=true;
        if(mp.size()>2)
        {
            cout<<"NO\n";
            return 0;
        }
        else if(mp.size()==2)
        {
            map<long long,bool>::iterator it,it1;
            it=mp.begin();
            it1=mp.end();
            it1--;
            long long dif=it->first - it1->first;
            if(dif!=1&&dif!=-1)
            {
                cout<<"NO\n";
                return 0;
            }
        }
    }
    cout<<"YES\n";
    cout<<vec1[0]<<" ";
    for(int i=1; i<vec1.size()&&vec1[i]!=1; i++)
    {
        cout<<vec1[i]<<" ";
    }
    cout<<"\n";
}
