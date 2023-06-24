#include<stdio.h>
int fun1(int);
int fun2(int);

int main()
{
   
    printf("%d",fun1(5));
}
int fun1(int a)
{
    if(a<=1)
    return 1;
    else
    return a*fun2(a-1);
}
int fun2(int a)
{
    if(a<=1)
    return 1;
    else
    return a*fun1(a-1);
}