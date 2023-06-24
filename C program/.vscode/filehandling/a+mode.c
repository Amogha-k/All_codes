#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char ch;
    char str [50];
    fp=fopen("abc.txt","a+");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
    fputs("this is awesome",fp);
    rewind(fp);
  while(!feof(fp)){
    ch=fgetc(fp);
    printf("%c",ch);
  }
  
  fclose(fp);
}