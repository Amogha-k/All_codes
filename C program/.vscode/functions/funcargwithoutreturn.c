#include<stdio.h>

void sum(float,float);

void main()
{
    float x,y;
    printf("enter the x and y ");
    scanf("%f %f",&x,&y);
    sum(x,y);
}

void sum(float a,float b)
{
     float sum=0;
    sum=a+b;
    printf("sum is =%f",a+b);
}