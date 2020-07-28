#include<stdio.h>
#include<string.h>
int main()
{
    char str[110];
    int i,n;
    int alpha[26]={0};
    scanf("%d",&n);
    scanf("%s",str);
  //  printf("%s",str);


  // printf("%s",str);

    for(i=0;i<n;i++)
    {
       // printf("entryloop\n");
        if(str[i]>='A'&&str[i]<='Z')
            str[i]=str[i]-'A'+'a';
        //printf("%c ",str[i]);
        if(str[i]>='a'&&str[i]<='z')
        {
            //printf("condition entry\n");
            alpha[str[i]-'a']=1;
            //printf("%d str i-a \n",str[i]-'a');
        }
    }
    for(i=0;i<26;i++)
    {
        if(alpha[i]==0)
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}