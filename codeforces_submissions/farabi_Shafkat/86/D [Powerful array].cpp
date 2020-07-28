#include<bits/stdc++.h>
using namespace std;
int block_sz;
long long int cnt[1111111];
pair<int, pair<int,int> > queries[311111];
long long int ans[311111];
int num[311111];
int t;
bool mo_sort_cmp(pair< int,pair<int,int> >a,pair<int, pair<int,int> >b)
{
    //design the comp
    //usually sort with ascending block number priority ( size of root n ),then witch ascending j;
    int i1,i2,j1,j2;
    i1=a.second.first;
    i2=b.second.first;
    j1=a.second.second;
    j2=b.second.second;
    if(i1/block_sz==i2/block_sz)
    {
        return j1<j2;
    }
    return i1/block_sz<i2/block_sz;
}
class mo
{
public:
    int left;
    int right;
    int* numbers;
    int sz;
    long long int answer;
    // vector<pair< int,pair<int,int> > >& queries;

    mo(int *num,int _sz )
    {

        left=0;
        right=0;
        numbers=num;
        sz=_sz;
        answer=0;

    }
    void add(int position)
    {
        //modify this code to add stuff to the current window
        //  if(position>=sz)return;
        //cout<<position<<" that "<<answer<<endl;
        answer-=cnt[numbers[position]]*cnt[numbers[position]]*numbers[position];
        cnt[numbers[position]]++;
       // cout<<cnt[numbers[position]]<<" this "<<numbers[position]<<endl;
        answer+=cnt[numbers[position]]*cnt[numbers[position]]*numbers[position];
       // cout<<answer<<" then this\n";
        //if(cnt[numbers[position]]==1)answer++;

    }
    void remv(int position)
    {
        //modify this to remove ans
        // if(position<0)return;
        answer-=cnt[numbers[position]]*cnt[numbers[position]]*numbers[position];
        cnt[numbers[position]]--;
        answer+=cnt[numbers[position]]*cnt[numbers[position]]*numbers[position];
        //if(cnt[numbers[position]]==0)answer--;
    }

    bool mo_sort()
    {
        sort(queries,queries+t,mo_sort_cmp);
    }
    void do_mo()
    {
        add(left);
        for(int i=0; i<t; i++)
        {
            // cout<<left+1<<" "<<right+1<<" "<<answer<<endl;
            while(left<queries[i].second.first)
            {
                remv(left);
                left++;
            }
            while(left>queries[i].second.first)
            {

                left--;
                add(left);

            }
            while(right>queries[i].second.second)
            {
                remv(right);
                right--;
            }
            while(right<queries[i].second.second)
            {

                right++;
                add(right);
            }
            //    cout<<"eita?"<<endl;
            ans[queries[i].first]=answer;
        }

    }

};


int main()
{
    int n;
    //scanf("%d%d",&n);
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin>>n>>t;
    block_sz=floor(sqrt(n));

    for(int i=0; i<n; i++)
    {

        cin>>num[i];
        // scanf("%d",&num[i]);
    }
//   vector<pair<int,pair<int,int> > >qr;
    //int q;
    //scanf("%d",&q);

    for(int i=0; i<t; i++)
    {
        int l,r;
        //   scanf("%d%d",&l,&r);
        cin>>l>>r;
        queries[i]=make_pair(i,make_pair(l-1,r-1));

    }
    memset(cnt,0,sizeof(cnt));
    mo obj_mo(num,n);
    obj_mo.mo_sort();
    // cout<<"this"<<endl;
    obj_mo.do_mo();
    //cout<<"couble"<<endl;
    for(int i=0; i<t; i++)
    {
        //  printf("%d\n",ans[i]);
        cout<<ans[i]<<"\n";
    }

}




















