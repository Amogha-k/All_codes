#include<stdio.h>
int main()
{
    int n;
    char c;
    printf("enter hexadigit\n");
    scanf("%c",&c);
   n=c<'a'?c-'0':c-'a'+10;
   printf("%d",n);
}