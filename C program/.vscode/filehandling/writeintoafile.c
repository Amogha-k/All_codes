#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    int a;
    char str[50];
    printf("enter the name");
    gets(str);
    fp=fopen("abd.txt","w");
    if (fp==NULL)
    {
        printf("NO FILE NAME AVALIABLE");
        exit(1);
    }
    
    fprintf(fp,"%s",str);
    fclose(fp);
}