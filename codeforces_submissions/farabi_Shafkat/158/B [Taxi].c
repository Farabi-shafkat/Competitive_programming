#include<stdio.h>
#include<math.h>
int main()
{
    float i,j,k,n,a,car,b,c,d;
    scanf("%f",&n);
    int m;
    float ghor[4];
    for(m=0;m<4;m++)
    {
        ghor[m]=0;
    }
    for(i=0;i<n;i++)
    {
        scanf("%f",&a);
        ghor[(int)a-1]++;

    }
    //printf("%f %f %f %f\n",ghor[0],ghor[1],ghor[2],ghor[3]);

    car=ghor[3]+ghor[2]+ceil(ghor[1]/2);
    if(ghor[2]!=0)
    {


           if(ghor[0]-ghor[2]>0)
        {
            c=(int)ghor[1]%2;
            d=ghor[0]-ghor[2];
            b=(ceil((d-2*c)/4.0));
           // printf("%f",c);
            car=car+b;
           //printf("bal");
        }


    }
    else if(ghor[1]!=0)
    {
            if(ghor[1]==1&&ghor[0]<=2)
                b=1;
            else
            {
                c=(int)ghor[1]%2;
                b=ceil((ghor[0]-c-c)/4.0);
                car=car+b;
            }
    }
    else
    {
        b=ceil(ghor[0]/4);
        //printf("%f",ghor[0]);
        car=car+b;
    }


     printf("%.0f",car);
}
