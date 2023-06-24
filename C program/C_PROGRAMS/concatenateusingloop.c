#include<stdio.h>
#include<string.h>
int main(){
    int len1,len2,i;
    char s1[30]="jenny";
    char s2[12]="teacher";
    len1=strlen(s1);
    len2=strlen(s2);
    printf("%d   %d\n",len1,len2);
    for(i=0;i<=len2;i++){
        s1[i+len1]=s2[i];
    }printf("%s",s1);
}