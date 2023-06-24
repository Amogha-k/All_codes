#include<stdio.h>
int main()
{
    int n;
    char hexadigit;
    printf("enter an integer from 1-15\n");
    scanf("%d",&n);
    hexadigit=n<10?'0'+n:'a'+n-10;
    printf("hexa number is %c",hexadigit);
    
}