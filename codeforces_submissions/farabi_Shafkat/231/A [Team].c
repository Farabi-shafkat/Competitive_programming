#include<stdio.h>
int main()
{
    int p,v,t,n,i,st=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&p,&v,&t);
        st=p*(v+t)+t*v;
        //printf("%d\n",st);
        if(st!=0)
            c++;


    }
    printf("%d",c);
}
