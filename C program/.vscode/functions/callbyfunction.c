#include<stdio.h>
void sum(int a,int b)
{
    printf("sum=%d",a+b);
}
void sub(int a,int b)
{
    printf("\nsub=%d",a-b);
}
void display(void(*ptr)(int,int))
{
    ptr(5,1);
}
void main(){
display(sum);
display(sub);
}