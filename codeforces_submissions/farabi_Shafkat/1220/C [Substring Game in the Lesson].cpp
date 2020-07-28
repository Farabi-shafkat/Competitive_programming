#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    string str;
    cin>>str;
    int mp[27];
    memset(mp,-1,sizeof(mp));
    int n=str.size();
    bool ans[n+10];
    ans[0]=0;
    mp[str[0]-'a']=0;
    for(int i=1; i<n; i++)
    {

        int ii=0;

        // cout<<"hoise"<<endl;
        while(ii!=27)
        {
            if(ii+'a'<str[i])
            {
                //cout<<it->first<<" "<<it->second<<endl;
                if(mp[ii]==-1){ii++;continue;}
                if(ans[mp[ii]]==0)
                {
                    // cout<<"mad";
                    ans[i]=1;
                    break;
                    // cout<<"man"<<endl;
                }
                ii++;
                //cout<<"bal"<<endl;
            }
            else
            {
                ans[i]=0;
                break;
            }
        }
        //cout<<"bal2"<<endl;
        //st.insert(str[i]);
        if(!ans[i])
            mp[str[i]-'a']=i;

    }
    for(int i=0; i<n; i++)
    {
        if(ans[i])
        {
            cout<<"Ann\n";
        }
        else
            cout<<"Mike\n";
    }
}
