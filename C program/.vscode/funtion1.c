//without parameter and without return type
#include<stdio.h>
void add( );
void main( )
{
 add( );
}
void add ( ) 
{
int sum;
int a,b;
printf("enter a and b values\n");
scanf("%d%d",&a,&b);
sum=a+b;
printf("\n The sum is %d", sum);
return;
}