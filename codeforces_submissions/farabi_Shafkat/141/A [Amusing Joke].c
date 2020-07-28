#include<stdio.h>
#include<string.h>
int main()
{
    int i,alpha1[26],alpha2[26];
    memset(alpha1,0,sizeof(alpha1));

    char name1[202],name2[101],name3[202];
    memset(alpha2,0,sizeof(alpha2));

    scanf("%s",name1);
    scanf("%s",name2);
    strcat(name1,name2);
    for(i=0;i<strlen(name1);i++)
    {
        alpha1[name1[i]-'A']++;
       // printf("%d ", alpha1[name1[i]-'A']);
    }

   // printf(">>%s\n",name1);
    scanf("%s",name3);
   // printf("%s",name3);

    for(i=0;i<strlen(name3);i++)
    {
        alpha2[name3[i]-'A']++;

    }
    //printf("%d %d",alpha1['K'-'A'],alpha2['K'-'A']);

    for(i=0;i<26;i++)
    {
       // printf("lol");
        if(alpha1[i]!=alpha2[i])
        {
            //printf("conen %d",i);
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}
