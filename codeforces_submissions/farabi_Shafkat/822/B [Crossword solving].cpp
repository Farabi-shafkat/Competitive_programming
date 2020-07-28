#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001],t[1001];
    int num,p,m,i,n,j,c,min=90000,pos[1001],poslock[1001];
    scanf("%d %d",&n,&m);
    scanf(" %s %s",s,t);
    for(i=0;i<=m-n;i++)
    {
        c=0;
        p=0;
        for(j=i;j<=i+n-1;j++)
        {

            if(t[j]!=s[j-i])
                {
                    c++;
                    pos[p++]=j-i+1;
                }
        }
        if(c<min)
            {
                min=c;
                for(num=0;num<p;num++)
                {
                    poslock[num]=pos[num];
                  // printf("num->%d c->%d\n",num,c);
                }
               // strcpy(poslock,pos);

            }
    }
    printf("%d\n",min);
    for(i=0;i<min;i++)
        printf("%d ",poslock[i]);
    return 0;
}
