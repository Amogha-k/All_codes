#include<stdio.h>
int main()
{
    int a,b;
    char oprtr;
    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);
    printf("enter opertar\n");
    scanf("%c",&oprtr);
    scanf("%c",&oprtr);
    switch(oprtr)
    {
         case '+':printf("%d",a+b);
                break;
         case '-':printf("%d",a-b);
         break;
         case '/':printf("%d",a/b);
         break;
         case '*':printf("%d",a*b);
         break;
         default:printf("invalid opertar");
         
    }
}