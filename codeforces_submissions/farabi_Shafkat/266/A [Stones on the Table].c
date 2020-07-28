#include<stdio.h>
int main()
{
    int n,r,g,sm=1,m=0,rmv=0,i,j;
    scanf("%d ",&n);
    char ghor[n];
    //fflush(stdin);
    for(i=0;i<n;i++)
    {

        scanf("%c",&ghor[i]);
        if((ghor[i]==ghor[i-1])&&i!=0)
        {
            sm=sm+1;
            if(i==n-1)
            {
                rmv=rmv+sm-1;
            }

        }
        else if(i!=0&&(ghor[i]!=ghor[i-1]))
        {
            rmv=rmv+sm-1;
            sm=1;
            m=1;
        }

    }

    printf("%d",rmv);


}