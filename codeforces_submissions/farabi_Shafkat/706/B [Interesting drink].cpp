#include<stdio.h>
#include<stdlib.h>
long long n;
int cmpfunc(const void *a,const void *b)
{
    return(*(int*)a-*(int*)b);
}
long long b_search(long long low,long long high,long long coin,long long price[])
{
    long long i;
    //for(i=0;i<n;i++)
    //{
      //  printf("%lld?????????\n",price[i]);
    //}
      long long ans,mid,mark=0;
      while(low<=high)
        {
            mid=(high+low)/2;
            if(price[mid]>coin)
                high=mid-1;
            else if(price[mid]<coin)
                low=mid+1;
            else if(price[mid]==coin)
            {
                mark=1;
                //printf("hoise %lld %lld %lld\n",mid,price[mid],coin);
                break;
            }
            //printf("%lld %lldmid\n",mid,price[mid]);
        }
        //printf("%lldmid\n",mid);
     if(mark==1)
            {

                   if(mid<n&&price[mid]==price[mid+1])
                   {
                       //price[p]=mid+1;
                     //  printf("lol\n");
                        ans=b_search(mid+1,n-1,price[mid],price);
                   }
                   else
                    ans=mid+1;


            }

        else
           {
               while(low<n&&price[low+1]<coin)
                    low++;
               ans=low;
           }
      //     printf("%lld??\n",ans);
        return ans;
}
int main()
{
    long long int i,q,j,coin,max,maxin;
    scanf("%lld",&n);
    long long price[n];
    for(i=0;i<n;i++)
    {
       scanf("%lld",&price[i]);
       //price[i][1]=-1;
    }
    /*for(i=0;i<n-1;i++)
    {
        max=price[i];//max asole minimum
        maxin=i;
        for(j=i;j<n;j++)
        {
            if(price[j]<max)
            {
                max=price[j];
                maxin=j;
            }
        }
        price[maxin]=price[i];
        price[i]=max;
    }*///<<-sort
  // // if(n==1000)
  // {for(i=0;i<n;i++)
     //  printf("--%lld\n",price[i]);
    qsort(price,n,sizeof(long long int),cmpfunc);
    //for(i=0;i<n;i++)
       // printf("%lld",price[i]);
    scanf("%lld",&q);
    long long high,low,mid,mark=0;
    for(j=0;j<q;j++)
    {
        scanf("%lld",&coin);
        mark=0;
        if(coin<price[0])
        {
            printf("0\n");
            continue;
        }
        else if(coin>=price[n-1])
        {
            printf("%lld\n",n);
            continue;
        }
        low=0;
        high=n-1;
      /*  while(low<=high)
        {
            mid=(high+low)/2;
            if(price[mid]>coin)
                high=mid-1;
            else if(price[mid]<coin)
                low=mid+1;
            else if(price[mid]==coin)
            {
                mark=1;

                break;
            }
            //printf("%lld %lldmid\n",mid,price[mid]);
        }
    // printf("l%lld==h%lld\n",low,high);
      //  printf("%lldpricehigh\n",price[high]);
      long long ans,p;
        if(mark==1)
            {

                while(mid<n&&price[mid]==price[mid+1])
                   {
                       //price[p]=mid+1;
                       mid++;
                   }
                ans=mid+1;

            }

        else
           {
               while(low<n&&price[low+1]<coin)
                    low++;
               ans=low;
           }*/

        long long b;
        b=b_search(0,n-1,coin,price);
        printf("%lld\n",b);

    }
}
