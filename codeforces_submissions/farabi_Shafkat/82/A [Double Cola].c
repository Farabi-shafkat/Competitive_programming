#include<math.h>
int main()
{
    double x,n,num;
    scanf("%lf",&x);
    n=(log((x/5)+1))/(log(2.0));
    n=ceil(n)-1;
    double nbeg;
    nbeg=5*(pow(2,n)-1);
    num=(x-nbeg)/pow(2,n);
    //printf("%lf",num);
    if(num>0&&num<=1.0)
        printf("Sheldon");
    else if(1.0<num&&num<=2.0)
        printf("Leonard");
    else if(2.0<num&&num<=3.0)
        printf("Penny");
    else if(3.0<num&&num<=4.0)
        printf("Rajesh");
    else if(4.0<num&&num<=5.0)
        printf("Howard");
}