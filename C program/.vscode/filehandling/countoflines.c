#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp=NULL;
    int count=1;
    char ch;
    char c;
    fp=fopen("abc.txt","r");
    if(fp==NULL)
{
    printf("error");
    exit(1);
}
while((ch=fgetc(fp))!=EOF)
{
    if(ch=='\n')
    {
        count++;
    }
    c++;
}
fclose(fp);
printf("the lines of the code is %d, characters is %d",count,c);
}