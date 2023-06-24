#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp=NULL;
    fp=fopen("abc.txt","r");
    if(fp==NULL)
    {
        printf("no file ");
        exit(1);
    }
fseek(fp,0,SEEK_END);
printf("%d",ftell(fp));
fclose(fp);
}