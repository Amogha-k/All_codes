#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr1=NULL;
    char c;
    fptr1=fopen("abc.txt","r");
    FILE *fptr2=NULL;
     fptr2=fopen("dest.txt","w");
     if(fptr1==NULL)
     {
        printf("empty");
        exit(1);
     }
    
if(fptr2==NULL)
     {
        printf("empty");
        exit(1);
     }
    while((c=fgetc(fptr1))!=EOF)
    {
        fputc(c,fptr2);
    }
    printf("succesfully copied");
    fclose(fptr1);
    fclose(fptr2);
}