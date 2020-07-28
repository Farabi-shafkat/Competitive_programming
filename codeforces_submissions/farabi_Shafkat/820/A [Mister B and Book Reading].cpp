#include<stdio.h>
#include<math.h>
int main()
{
    int c,v0,v1,a,l;
    int i=1;
    scanf("%d%d%d%d%d",&c,&v0,&v1,&a,&l);

    int p;
    p=v0;
    while(p<c)
    {
        v0+=a;
        if(v0>v1)
            v0=v1;
        p=p+v0-l;
        i++;
    }
   // i++;
    printf("%d\n",i);

}
