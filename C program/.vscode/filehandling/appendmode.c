#include<stdio.h>
#include<stdlib.h>
void main(){
    FILE *fp=NULL;
    char str [50];
    fp=fopen("abc.txt","a");
    if(fp==NULL)
    {
        printf("error");
        exit(1);

    }
    printf("enter the content you want");
    gets(str);
    //fputs(str,fp);

    fprintf(fp,"\n%s",str);
    printf("\nsuccesfully appended");
    fclose(fp);
}