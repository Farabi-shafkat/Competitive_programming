#include<bits/stdc++.h>
using namespace std;
#define MX 100100
bool is_prime[100101];
vector<int>prm_lst;
int srch(int down,int up,int num)
{
    int mid,mid2;
    while(down<=up)
    {
        mid=(up+down)/2;
        if(mid==mid2)
            return mid;
        if(prm_lst[mid]==num)
            return mid;
        if(prm_lst[mid]<num)
        {
            down=mid;
        }
        else if(prm_lst[mid]>num)
        {
            up=mid;
        }
        mid2=mid;
       // cout<<mid<<endl;
      //  if(mid==down)
            //return mid;
    }
    //cout<<mid<<endl;
    return mid;
}
int main()
{
    //sieve;
    memset(is_prime,0,sizeof(is_prime));
    is_prime[0]=1;
    is_prime[1]=1;
    for(int i=2;i<=MX;i++)
    {
        if(!is_prime[i])
        {
            prm_lst.push_back(i);
            for(int j=i+i;j<=MX;j+=i)
            {
                is_prime[j]=1;
            }
        }
    }
   //for(int j=0;j<prm_lst.size();j++)
   //   printf("%d\n",prm_lst[j]);
    //cout<<"fance "<<is_prime[MX]<<endl;
    //end of sieve
    int l=srch(1,prm_lst.size()-1,100000);
    //cout<<l<<" "<<prm_lst[l]<<" "<<prm_lst[l+1];
    int n,m;
    cin>>n>>m;
    int mat[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    int mn=10000000;
//    cout<<endl<<endl;
    for(int i=0;i<n;i++)
    {
        int c=0;
        for(int j=0;j<m;j++)
        {
            if(mat[i][j]==1)
            {
                c++;
                continue;
            }
            if(is_prime[mat[i][j]])
            {
               l=srch(1,prm_lst.size()-1,mat[i][j]);
               // cout<<mat[i][j]<<" "<<prm_lst[l]<<" "<<prm_lst[l+1]<<" "<<l<<endl;
               c+=prm_lst[l+1]-mat[i][j];
            }
        }
        if(c<mn)
            mn=c;

    }
    for(int j=0;j<m;j++)
    {
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(mat[i][j]==1)
            {
                c++;
                continue;
            }
            if(is_prime[mat[i][j]])
            {
               l=srch(1,prm_lst.size()-1,mat[i][j]);
            //   cout<<mat[i][j]<<" "<<prm_lst[l]<<" "<<prm_lst[l+1]<<endl;
             //  if(mat[i][j]-prm_lst[l]<0)
                //cout<<"wtf"<<endl;
               // if(prm_lst[l+1]-mat[i][j])
              //  cout<<"wtf2"<<endl;
               c+=prm_lst[l+1]-mat[i][j];
            }
        }
        if(c<mn)
            mn=c;

    }
    cout<<mn;

}
