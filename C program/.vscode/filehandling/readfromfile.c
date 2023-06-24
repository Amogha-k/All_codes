#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *fp=NULL;
char str[10];
fp=fopen("abc.txt","r");
if(fp==NULL)
{
    printf("error");
    exit(1);
}
//fgets(str,6,fp);
while (!feof(fp))
{
   fgets(str,5,fp);
   printf("%s",str);
}
   fclose(fp);
}