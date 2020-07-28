#include<bits/stdc++.h>
using namespace std;
void build_tree(int *arr,int *seg_tree,int left,int right,int index) /////O(n)
{
    if(left==right)
    {
        seg_tree[index]=arr[left];
        return;
    }
    int mid=(left+right)/2;
    build_tree(arr,seg_tree,left,mid,index*2);
    build_tree(arr,seg_tree,mid+1,right,index*2+1);
    seg_tree[index]=seg_tree[index*2]+seg_tree[index*2+1];
    return;
}
int query(int *arr,int *seg_tree,int left,int right,int index,int tl,int tr)//O(log n), tl and tr are targets, left and right are current position
{
    if(tl>tr)return 0;
    if(left==tl&&right==tr)
    {
        return seg_tree[index];
    }
    int mid=(left+right)/2;
    return query(arr,seg_tree,left,mid,(index*2),tl,min(tr,mid))+query(arr,seg_tree,mid+1,right,(index*2+1),max(tl,mid+1),tr);
}
void update(int *arr,int *seg_tree,int left,int right,int index,int node,int val)//node =update index, val=update value
{
    if(left==right)
    {
        arr[left]=val;
        seg_tree[index]=arr[left];
        return;
    }
    int mid=(left+right)/2;
    if(node<=mid)update(arr,seg_tree,left,mid,index*2,node,val);
    else update(arr,seg_tree,mid+1,right,index*2+1,node,val);
    seg_tree[index]=seg_tree[index*2]+seg_tree[index*2+1];

}
int updates[4*3*100002][2];
void update_range_lazy(int *arr, int * seg_tree,int left,int right,int index,int range_left,int range_right,int val,int prop)
{
    //  cout<<left<<" "<<right<<" "<<val<<" "<<prop<<endl;
    if(range_left>range_right)return;
//    if(left==4&&right==5){
    //cout<<left<<" ooohh "<<right<<" "<<range_left<<" "<<range_right<<" "<<val<<" "<<prop<<endl;
    // cout<<updates[index][0]<<" eta eta "<<updates[index][1]<<endl;
//    }
    if(updates[index][0]!=-1&&updates[index][1]!=-1)
    {
        //  cout<<range_left<<" returned "<<range_right<<" "<<prop<<endl;
        return;
    }


    if(left==range_left && right==range_right)
    {
        // updates[index].push_back(val);
//        if(left==1&&right==2)
//            {
//                cout<<" prop <<<<++++++++++++++++++ "<<prop<<endl;
//            }
        int p,v;
        //p=prop;
        //v=val;
        if(updates[index][0]==-1)
        {
            updates[index][0]=prop;
            updates[index][1]=val;
            if(prop==-1)
            {
                swap(updates[index][0],updates[index][1]);
            }
        }
        else if(updates[index][1]==-1)
        {
            if(prop!=updates[index][0])
                updates[index][1]=prop;
            else
                updates[index][1]=val;
//            if(left==1&&right==2)
//            {
//                cout<<" prop <<<<++++++++++++++++++ "<<prop<<endl;
//            }
            if(prop==-1)
            {
                if(val!=updates[index][0])
                    updates[index][1]=val;
            }





        }
//        cout<<left<<" ooohh "<<right<<" "<<range_left<<" "<<range_right<<" val "<<val<<" prop "<<prop<<endl;
//        cout<<updates[index][0]<<" eta eta "<<updates[index][1]<<endl;
        return;
    }
    int mid=(left+right)/2;
//   cout<<left<<" ooohh "<<right<<" "<<range_left<<" "<<range_right<<" val "<<val<<" prop "<<prop<<endl;

    if(updates[index][0]!=-1)
    {
        if(updates[index][1]==-1)
        {
            if(prop!=updates[index][0])
            {
                updates[index][1]=prop;
                prop=updates[index][0];
                if(updates[index][1]!=-1)
                    val=updates[index][1];
            }
            //else if(val!=updates[index][0]))

        }
        //val=prop;
        else if(updates[index][1]!=-1)
        {
            prop=updates[index][0];

            val=updates[index][1];
        }
        // if(prop==-1)prop=updates[index][1];
    }
    else
    {
        updates[index][0]=prop;
    }
//    cout<<left<<" ooohh "<<right<<" "<<range_left<<" "<<range_right<<" val "<<val<<" prop "<<prop<<endl;
//    cout<<updates[index][0]<<" eta eta "<<updates[index][1]<<endl;
    update_range_lazy(arr,seg_tree,left,mid,index*2,range_left,min(range_right,mid),val,prop);
    update_range_lazy(arr,seg_tree,mid+1,right,index*2+1,max(range_left,mid+1),range_right,val,prop);
    return;
}
int ans[3*100002+1];

void propagate(int *arr,int * seg_tree, int left,int right,int index,int target)
{
//    cout<<left<<" "<<right<<" "<<updates[index][0]<<" "<<updates[index][1]<<endl;
    if(left==right)
    {
        if(updates[index][0]==target)
        {
            ans[target]=updates[index][1];
        }
        else
            ans[target]=updates[index][0];
        return;
    }
    int mid=(left+right)/2;
    if(target>=left&&target<=mid)
    {
        int next=index*2;
        int a,b;
        a=updates[index][0];
        b=updates[index][1];
        if(updates[next][0]==-1)
        {
            //if(a!=updates[next][0]&&b!=updates[next][0])
            //{
            updates[next][0]=a;
            updates[next][1]=b;
            //}
//            else if (a==updates[next][0])
//            {
//                updates[next][0]=b;
//            }
//            else if(b==updates[next][0])
//            {
//                updates[next][0]=a;
//            }

        }
        else if(updates[next][1]==-1)
        {
            if(a!=updates[next][0])
                updates[next][1]=a;
            else if (b!=updates[next][0])
                updates[next][1]=b;
        }

        propagate(arr,seg_tree,left,mid,next,target);
    }
    else if(target>=mid+1&&target<=right)
    {
        int next=index*2+1;
        int a,b;
        a=updates[index][0];
        b=updates[index][1];
        if(updates[next][0]==-1)
        {
            //if(a!=updates[next][0]&&b!=updates[next][0])
            //{
            updates[next][0]=a;
            updates[next][1]=b;
//            }
//            else if (a==updates[next][0])
//            {
//                updates[next][0]=b;
//            }
//            else if(b==updates[next][0])
//            {
//                updates[next][0]=a;
//            }

        }
        else if(updates[next][1]==-1)
        {
            if(a!=updates[next][0])
                updates[next][1]=a;
            else if (b!=updates[next][0])
                updates[next][1]=b;
        }
        propagate(arr,seg_tree,mid+1,right,next,target);
    }
}
int main()
{


    int n,m;
    cin>>n>>m;
    int arr[n+1];
    for(int i=0; i<n; i++)
    {
        arr[i]=i+1;
    }
    int seg_tree[4*n+1];
    build_tree(arr,seg_tree,1,n,1);
    //  cout<<"tree built"<<endl;
    memset(updates,-1,sizeof(updates));
    for(int i=0; i<m; i++)
    {
        int right,left,x;
        cin>>left>>right>>x;
        update_range_lazy(arr,seg_tree,1,n,1,left,right,x,-1);
    }
    // cout<<"updated"<<endl;
    memset(ans,-1,sizeof(ans));
    //  cout<<"cleared"<<endl;
    for(int i=1; i<=n; i++)
    {
//        cout<<"propagation"<<" "<<endl;
//        cout<<endl;
        propagate(arr,seg_tree,1,n,1,i);
        // cout<<"returns"<<endl;
        if(ans[i]==-1||ans[i]==i)ans[i]=0;
        cout<<ans[i]<<" ";
//        cout<<" ans "<<i<<endl;
    }

}


















