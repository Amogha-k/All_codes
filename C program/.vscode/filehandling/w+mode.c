#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char str [50];
    char ch;
    fp=fopen("abcd.txt","w+");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
    fputs(" jenny",fp);
    rewind(fp);
 while (!feof(fp))
 {
    fgets(str,5,fp);
    printf("%c",ch);
 }
 
  
    fclose(fp);
}   