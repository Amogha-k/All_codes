#include<stdio.h>
int main()
{
    int a,b;
    char oprt;
    printf("enter the number a=");
    scanf("%d",&a);
    printf("enter the nunber b=");
    scanf("%d",&b);
    printf("enter the operator=");
    scanf("%c",&oprt);
    // printf("enter the operator");
    scanf("%c",&oprt);
    switch(oprt)
    {
                case'+':
                printf("the sum is %d",a+b);
                break;
                case'-':
                printf("the sub is %d",a-b);
                break;
                case'*':
                printf("the multiply is %d",a*b);
                break;
                case'/':
                printf("the divison is %d",a/b);
                break;
                default:
                printf("invalid optr");
    }           
}