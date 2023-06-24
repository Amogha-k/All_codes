//with parameter and without return type
#include<stdio.h>
void add( );
void main( )
{
 add(5,3);
}
void add (int a,int b) 
{
int sum;
//int a,b;
//printf("enter a and b values\n");
//scanf("%d%d",&a,&b);
sum=a+b;
printf("\n The sum is %d", sum);
return;
}