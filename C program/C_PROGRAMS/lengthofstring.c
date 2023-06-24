#include<stdio.h>
#include<string.h>
int main(){
    int count=0,i;
    char name[30];
    printf("enter the name =");
    gets(name);
    while (name[i]!='\0')
    {
        count++;
        i++;
    }
    
    printf("string lenth=%d",count);
}