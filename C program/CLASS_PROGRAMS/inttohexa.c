#include<stdio.h>
int main()
{
    int n;
    char hexadigit;
    printf("enter integer\n");
    scanf("%d",&n);
    hexadigit=n<10?n-'o':n+'a'-10;
   printf("%c",hexadigit);
}