int main()
{
    int i,j,mat[5][5],m,n,d;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
            {
                scanf("%d",&mat[i][j]);
                if(mat[i][j]==1)
                {
                    m=i;
                    n=j;
                }
            }


    }
     d=abs(m-2)+abs(n-2);
    printf("%d",d);


}
