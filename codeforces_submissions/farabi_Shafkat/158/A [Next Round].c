#include<stdio.h>
int main()
{
    int a,i,k;
    scanf("%d %d",&a,&k);
    int con[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&con[i]);
    }
    int ans;
    ans=k;
    if(con[k-1]>0)
    {
        for(i=k;i<a;i++)
        {
            if(con[k-1]==con[i])
                ans++;
        }

    }
    else
    { ans=0;
        for(i=0;i<a;i++)
        {
            if(con[k-1]<con[i])
                {ans=ans+1;

                }
        }
    }
    printf("%d",ans);
    return 0;
}
