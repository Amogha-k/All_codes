#include<stdio.h>
void modify(char[],char[]);
void main()
{
    char str1[]="jenny";
    char str2[]="teacher";
    modify(str1,str2);
}
void modify( char str1[],char str2[]){
    //to read the length of the string
    int i,length=0;
    
    for(i=0;str1[i]!='\0';i++)
    length+=1;
    printf("lenght of the string is %d\n",length);
    str2[1]='a';
    printf("%s %s",str1,str2);
}
