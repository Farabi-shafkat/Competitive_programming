#include<stdio.h>
int main()
{
    int num;
    int ord[3]={0,0,0};
    int chk[3]={-1,-1,-1};
    scanf("%d",&num);
    int arr[num];
    int i,an=1;
    for(i=0;i<num;i++)
        scanf("%d",&arr[i]);
    for(i=1;i<num;i++)
    {
        if((arr[i]>arr[i-1]&&i==1)||(arr[i]>arr[i-1]&&arr[i-1]<=arr[i-2]))
            {
                ord[0]++;
                chk[0]=i;
            }
        else if((arr[i]==arr[i-1]&&i==1)||(arr[i]==arr[i-1]&&arr[i-1]!=arr[i-2]))
            {
                ord[1]++;
                chk[1]=i;
            }
        else if(((arr[i]<arr[i-1]&&i==1))||(arr[i]<arr[i-1]&&arr[i-1]>=arr[i-2]))
            {
                ord[2]++;
                chk[2]=i;
            }
    }
  //  printf("1_%d 2_%d 3_%d\n%d %d %d\n",chk[0],chk[1],chk[2],ord[0],ord[1],ord[2]);
    if(ord[0]<=1&&ord[1]<=1&&ord[2]<=1)
    {
        if((chk[0]<chk[1]&&chk[1]<chk[2])||(chk[0]==chk[2]&&chk[0]==-1)||(chk[0]==-1&&chk[1]<chk[2])||(chk[0]<chk[1]&&chk[2]==-1)||(chk[1]==-1&&(chk[0]<chk[2]))||(chk[1]==-1&&chk[2]==-1)||(chk[0]==-1&&chk[1]==-1))
        {
            printf("YES\n");
        }
        else
            printf("NO\n");

    }
    else
        printf("NO\n");
    return 0;
}
