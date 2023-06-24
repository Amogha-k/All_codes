#include<stdio.h>
#include<stdlib.h>
void main(){
    FILE*fp=NULL;
    char ch ;
    fp=fopen("abc.txt","r+");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
   fseek(fp,6,SEEK_SET);
    //rewind(fp);
    while(!feof(fp))
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }
    rewind(fp);
    while(!feof(fp))
    {
        ch=fgetc(fp);
        printf("%c",ch);
    } blgoigehpos;ln
    fclose(fp);
}