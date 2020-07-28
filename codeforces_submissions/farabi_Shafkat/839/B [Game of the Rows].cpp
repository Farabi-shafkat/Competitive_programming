#include<bits/stdc++.h>
using namespace std;
bool comp(int i,int j)
{
    return i>j;
}
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int grp[k];
    int use=0;
    //  memset(use,0,siezof(use));
    for(int i=0; i<k; i++)
    {
        scanf("%d",&grp[i]);
    }
   // sort(grp,grp+k,comp);
    int tw=n+n,fr=n;
    int unp2=0,unp1=0;
     for(int i=0; i<k; i++)
    {
      //cout<<use<<" tw>>"<<tw<<" "<<fr<<" "<<unp1<<" "<<unp2<<" "<<grp[i]<<" ";//<<endl;
        if(grp[i]>4)
        {
            // grp[i]=grp[i]%4;
            fr-=grp[i]/4;
            grp[i]=grp[i]%4;
           // sort(grp,grp+k,comp);
            if(fr<0)
            {
                tw+=fr*2;
                fr=0;
            }
        }
    }
    sort(grp,grp+k,comp);
    for(int i=0; i<k; i++)
    {
      //cout<<use<<" tw>>"<<tw<<" "<<fr<<" "<<unp1<<" "<<unp2<<" "<<grp[i]<<" ";//<<endl;
       /* if(grp[i]>4)
        {
            // grp[i]=grp[i]%4;
            fr-=grp[i]/4;
            grp[i]=grp[i]%4;
           // sort(grp,grp+k,comp);
            if(fr<0)
            {
                tw+=fr*2;
                fr=0;
            }
        }*/

    //    cout<<grp[i]<<endl;
        if(grp[i]==0){
            use++;
            continue;
        }
        if(grp[i]==3)
        {
            use++;
            //grp[i]=grp[i]%2;
            if(fr>0)
            {
                fr--;
            }
            else
            {
                tw-=2;

            }
            continue;
        }

        if(tw>0&&grp[i]<=2)
        {
            tw--;
            use++;
            // cout<<"abar"<<endl;
        }
        else if(fr>0&&grp[i]>2)
        {
            fr--;
            use++;
            //cout<<"keno?"<<endl;
        }
        else if(fr<=0&&tw>0&&grp[i]>2&&grp[i]<=4)
        {
            use++;
            tw-=2;
            // cout<<"dhuke"<<tw<<" "<<fr<<endl;
        }//
        else if(tw<=0&&fr>0&&grp[i]<=2)
        {
            if(grp[i]==2)
            {
                if(unp1!=0)
                {
                    unp1--;
                    use++;
                }

                else
                {
                    unp2++;
                    fr--;
                    use++;
                }
            }
            else if(grp[i]==1)
            {
                if(unp2!=0)
                {
                    unp2--;
                    use++;
                }
                else
                {
                    unp1++;
                    fr--;
                    use++;
                }
            }
          //  cout<<"ekhane?"<<endl;
        }
        else if(tw==0&&fr==0&&grp[i]<=2)
        {
            if(unp2==0&&unp1!=0&&(unp1+1)%2==0&&grp[i]==1)
            {
                unp1=0;
                use++;
                continue;
            }
            else if(unp2==0&&unp1!=0&&grp[i]==1)
            {
                unp1++;
                use++;
               // cout<<"hoy "<<unp1<<endl;
                continue;
            }
            if(unp1==0&&unp2!=0&&(unp2)>=2&&grp[i]==2)
            {
                unp2=0;
                use++;
                continue;
            }
            if(grp[i]==1)
            {
                if(unp2!=0)
                {
                    use++;
                    unp2--;
                }
                //else unp1++;
            }
            if(grp[i]==2)
            {
                if(unp1!=0)
                {
                    unp1--;
                    use++;
                }
                //else unp2++;
            }
            //use++;
        }
        else if(tw==0&&fr==0)
        {

            if(unp1>=unp2&&unp2!=0)
            {
                unp1=unp1-unp2;
                unp2=0;
            }
            else if(unp2>unp1)
            {
                unp2=unp2-unp1;
            }
            // cout<<"dhuke ekhane"<<endl;
        }

    }
    if(tw==0&&fr==0)
    {
        if(unp1>=unp2&&unp2!=0)
        {
            unp1=unp1-unp2;
            unp2=0;
        }
        else if(unp2>unp1)
        {
            unp2=unp2-unp1;
        }
        //cout<<"dhuke ekhane"<<endl;
    }
   // cout<<tw<<" "<<fr<<" "<<use<<endl;
    if(tw<0||fr<0)cout<<"NO\n";
    else if(use!=k)cout<<"NO\n";
    else cout<<"YES\n";
}
