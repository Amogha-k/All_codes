#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char str [50];
    fp=fopen("abc.txt","r+");
    if(fp==NULL)
    {`
        printf("error");
        exit(1);
    }
    fputs(" jenny",fp);
   fputc('z',fp);
   // fputc("xyz",fp);
    fclose(fp);
}