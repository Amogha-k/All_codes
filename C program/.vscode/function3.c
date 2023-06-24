//without parameter with return type//without parameter and without return type
#include<stdio.h>
int add( );
void main( )
{
    int result;
    result=add( );
    printf("%d",result);
}
int add( ) 
{
int sum;
int a,b;
printf("enter a and b values\n");
scanf("%d%d",&a,&b);
sum=a+b;
//printf("\n The sum is %d", sum);
return sum;
}