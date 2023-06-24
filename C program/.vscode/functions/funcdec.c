//declaration
#include<stdio.h>

float sum(void);//function declaration better to declare void here only

void main()
{
    sum();

}
float sum(){
    float a,b,sum=0;
    printf("enter two numbers ");
    scanf("%f %f",&a,&b);
    sum = a+b;
    printf("sum is %f",sum);
}
