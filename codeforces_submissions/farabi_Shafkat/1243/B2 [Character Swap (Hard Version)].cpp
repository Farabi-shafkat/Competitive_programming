#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    int n;
    cin>>k;
    while(k--)
    {
        cin>>n;
        string s,t;
        cin>>s>>t;
        map<char,int>mp;
        for(int i=0; i<s.size(); i++)
        {
            mp[s[i]]++;

            //   mp1[s[i]]++;
        }
        for(int i=0; i<t.size(); i++)
        {
            mp[t[i]]++;
            // mp2[t[i]]++;
        }
        bool ch=0;
        for(auto it=mp.begin(); it!=mp.end(); it++)
        {
            if(it->second%2==1)
            {
                cout<<"No\n";
                ch=1;
                break;
            }

        }
        if(ch)continue;

        vector<pair<int,int> > ans;




        /*for(int i=0; i<t.size(); i++)
        {
            for(int j=i+1; j<t.size(); j++)
            {
                if(t[i]==t[j])
                {
                    swap(t[i],s[j]);
                    ans.push_back(make_pair(j,i));
                }
            }
        }*/
        bool per[t.size()+1];
        memset(per,0,sizeof(per));
        for(int i=0; i<s.size(); i++)
        {
            if(s==t)break;
           // bool c=0;

           

           
            /*for(int j=0; j<t.size(); j++)
            {
                if(t[i]==t[j])
                {
                    swap(t[i],s[j]);
                    ans.push_back(make_pair(j,i));
                    per[i]=1;
                   // c=1;
                    break;
                }
            }*/
          //  if(c)continue;
            for(int j=0; j<t.size(); j++)
            {
                if(s[i]==t[j]&&!per[j]&&!per[i])
                {
                    swap(s[j],t[j]);
                    ans.push_back(make_pair(j,j));
                    swap(t[i],s[j]);
                    ans.push_back(make_pair(j,i));
                    per[i]=1;
                }

            }
            for(int j=i+1; j<s.size(); j++)
            {
                if(s[i]==s[j]&&per[i]==0&&per[j]==0)
                {
                    swap(s[j],t[i]);
                    ans.push_back(make_pair(j,i));
                    per[i]=1;
                //    c=1;
                    break;
                }
            }
            for(int ii=0; ii<t.size(); ii++)
            {
                for(int j=ii+1; j<t.size(); j++)
                {
                    if(t[ii]==t[j]&&per[ii]==0&&per[j]==0)//&&!per[ii]&&!per[j])
                    {
                        swap(t[j],s[ii]);
                        per[ii]=1;
                        ans.push_back(make_pair(ii,j));
                        break;
                    }
                }
            }
        }
     //   int itr=0;
//        while(s!=t&&ans.size()<=6)
//        {
//            itr++;
//            for(int i=0; i<t.size(); i++)
//            {
//                for(int j=i+1; j<t.size(); j++)
//                {
//                    if(t[i]==t[j]&&!per[i]&&!per[j])
//                    {
//                        swap(t[i],s[j]);
//                        per[j]=1;
//                        ans.push_back(make_pair(j,i));
//                        break;
//                    }
//                }
//            }
//        }
        cout<<"Yes\n";

        cout<<ans.size()<<"\n";
        for(int i=0; i<ans.size(); i++)
        {
            cout<<ans[i].first+1<<" "<<ans[i].second+1<<"\n";
            //if(i==5)break;
        }

    }
}
