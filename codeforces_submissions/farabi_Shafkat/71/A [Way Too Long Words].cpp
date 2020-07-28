#include<stdio.h>
#include<string.h>
int main(){
    int n;
    char s[100];
    scanf("%d",&n);
   // fflush(stdin);
    while(n--){
        scanf(" %s",s);
        if(strlen(s)>10){
            printf("%c%d%c\n",s[0],strlen(s)-2,s[strlen(s)-1]);
        }
        else{
            puts(s);
        }
    }
}
