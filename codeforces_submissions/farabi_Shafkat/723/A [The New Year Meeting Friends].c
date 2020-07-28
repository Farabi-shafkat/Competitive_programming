#include<stdio.h>
int main()
{
   int ghor[3],i,j,max,in;
   scanf("%d %d %d",&ghor[0],&ghor[1],&ghor[2]);
   for(i=0;i<2;i++)
   {

       max=ghor[i];
       in =i;
       for(j=1;j<3;j++)
       {
           if(ghor[j]>max)
           {
               max=ghor[j];
               in=j;
           }
       }
       ghor[in]=ghor[i];
       ghor[i]=max;
   }
   printf("%d",ghor[0]-ghor[2]);
}
