#include<stdio.h>
#include<string.h>
int main()
{
    int n,m,i,j;
    scanf("%d %d",&n,&m);
   // char snake[n][m+1];
    for(j=0;j<n;j++)//row
       {
           for(i=0;i<m;i++)//column or cells of row
            {
                if(j%2==0)
                    printf("#");
                else if(j%4==3&&i==0)
                    printf("#");
                else if(j%4==3&&i!=0)
                    printf(".");
                else if(j%4==1&&i!=m-1)
                    printf(".");
                else if(j%4==1&&i==m-1)
                    printf("#");

            }
            printf("\n");
       }
}
