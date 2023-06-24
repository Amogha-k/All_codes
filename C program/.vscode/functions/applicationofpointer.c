#include<stdio.h>
 void add(int a,int b)
{
    printf("%d",a+b);
}
 void sub(int a,int b)
{
    printf("%d",a-b);
}
 void mul(int a,int b)
{
    printf("%d",a*b);
}
 void div(int a,int b)
{
    printf("%d",a/b);
}
int main()
{
    int ch=0,a,b;
    void(*ptr[10])(int,int)={add,sub,mul,div};
    printf("enter choice");
    scanf("%d",&ch);
    printf("enter A and B");
    scanf("%d %d",&a,&b);
    (*ptr[ch])(a,b);
}