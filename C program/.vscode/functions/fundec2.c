#include<stdio.h>
char fun(void);//compulsary to declare
void main()
{
    char ch;
    ch=fun();
    printf("ch=%c",ch);
}
char fun()
{
    char c;
    printf("enter a charcter");
    scanf("%c",&c);
    return c;
}