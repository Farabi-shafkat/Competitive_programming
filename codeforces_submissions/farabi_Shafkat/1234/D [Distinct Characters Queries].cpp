#include<bits/stdc++.h>
using namespace std;
int seg_tree_out[4*100000+1];


void bit_set(int &num,int pos,int val)
{
    if(val==1)
    {
        num=num|(1<<pos);
    }
    else if(val==0)
    {
        num=num&( ~(1<< pos));
    }
}


void build_tree(int *arr,int *seg_tree,int left,int right,int index) /////O(n)
{
    if(left==right)
    {
        //seg_tree_out[index].insert(arr[left]);
      //  cout<<"eta  "<<seg_tree_out[index]<<endl;
        bit_set(seg_tree_out[index],arr[left],1);
       // cout<<"eta ekhon "<<seg_tree_out[index]<<endl;
        return;
    }
    int mid=(left+right)/2;
    build_tree(arr,seg_tree,left,mid,index*2);
    build_tree(arr,seg_tree,mid+1,right,index*2+1);
    //seg_tree[index]=seg_tree[index*2]+seg_tree[index*2+1];
    //vector<int> v;
//    merge(seg_tree[index*2].begin(), seg_tree[index*2].end(), seg_tree[index*2+1], seg_tree[index*2+1], back_inserter(v));
//    set<int> m(v.begin(), v.end());
//    seg_tree[index]=m;
    seg_tree_out[index]=seg_tree_out[index*2]|seg_tree_out[index*2+1];

    // seg_tree_out[index].insert(seg_tree_out[index*2+1].begin(), seg_tree_out[index*2+1].end());

    return;
}
int query(int *arr,int *seg_tree,int left,int right,int index,int tl,int tr)//O(log n), tl and tr are targets, left and right are current position
{
    //set<int>faka;
    if(tl>tr)return 0;
    if(left==tl&&right==tr)
    {
        return seg_tree_out[index];
    }
    int mid=(left+right)/2;
    //return query(arr,seg_tree,left,mid,(index*2),tl,min(tr,mid))+query(arr,seg_tree,mid+1,right,(index*2+1),max(tl,mid+1),tr);
    int ret1=query(arr,seg_tree,left,mid,(index*2),tl,min(tr,mid));
    int ret2=query(arr,seg_tree,mid+1,right,(index*2+1),max(tl,mid+1),tr);
//      vector<int> v;
//    merge(seg_tree[index*2].begin(), seg_tree[index*2].end(), seg_tree[index*2+1], seg_tree[index*2+1], back_inserter(v));
//    set<int> m(v.begin(), v.end());
//    seg_tree[index]=m;

    //ret1.insert(ret2.begin(),ret2.end());
    return ret1|ret2;
}
void update(int *arr,int *seg_tree,int left,int right,int index,int node,int val)//node =update index, val=update value
{
    if(left==right)
    {
        // seg_tree_out[index].erase(arr[left]);
        bit_set(seg_tree_out[index],arr[left],0);
        arr[left]=val;
        bit_set(seg_tree_out[index],arr[left],1);
        return;
    }
    int mid=(left+right)/2;
    if(node<=mid)update(arr,seg_tree,left,mid,index*2,node,val);
    else update(arr,seg_tree,mid+1,right,index*2+1,node,val);
//    vector<int> v;
//    merge(seg_tree[index*2].begin(), seg_tree[index*2].end(), seg_tree[index*2+1], seg_tree[index*2+1], back_inserter(v));
//    set<int> m(v.begin(), v.end());
//    seg_tree[index]=m;
    seg_tree_out[index]=seg_tree_out[index*2]|seg_tree_out[index*2+1];
    return;;

//    seg_tree_out[index].insert(seg_tree_out[index*2+1].begin(), seg_tree_out[index*2+1].end());
//    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
      cin.tie(NULL);
    //driver program
    /*int arr[]={1,3,-2,8,-7};
    int arr_size=5;
    int seg_tree[4*arr_size+1];
    memset(seg_tree,0,sizeof(seg_tree));
    build_tree(arr,seg_tree,0,arr_size-1,1);
    for(int i=0;i<arr_size*4+1;i++)
    {
        cout<<i<< " "<<seg_tree[i]<<endl;
    }
    cout<<endl<<endl;
    cout<<query(arr,seg_tree,0,arr_size-1,1,1,3)<<endl;;
    update(arr,seg_tree,0,arr_size-1,1,3,10);
     cout<<query(arr,seg_tree,0,arr_size-1,1,1,3)<<endl;;*/

    string s;
    cin>>s;
    int q;
    int sz=s.size();
    int arr[sz+1];
    int *nn;
    for(int i=0; i<s.size(); i++)

    {
        arr[i]=s[i]-'a';
    }
    build_tree(arr,nn,0,sz-1,1);

    cin>>q;
    for(int i=0; i<q; i++)
    {
        int qr;
        cin>>qr;
        if(qr==1)
        {
            int pos;
            char c;
            cin>>pos>>c;
            update(arr,nn,0,sz-1,1,pos-1,c-'a');



        }
        else if(qr==2)
        {
            int l,r;
            cin>>l>>r;
            int ans=query(arr,nn,0,sz-1,1,l-1,r-1);
            int cnt=0;
           // cout<<ans<<endl;
            while(ans!=0)
            {
                bool bit=ans&1;
                ans=ans>>1;
                if(bit==1)
                    cnt++;
            }
            cout<<cnt<<"\n";
        }
    }






}

