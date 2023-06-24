#include<stdio.h>
void sum(int ,float);
void main()
{
    int a=4;
    float b=5.22;
    sum(a,b);
    printf("hello amogh u can do it\n");
}
void sum(int a,float b)
{
   float sum= a+b;
    printf("sum is %f\n",sum);
}