//with parameter and with return type
#include<stdio.h>
int add( );
void main( )
{
    int result;
 result=add(5,2);
 printf("sum=%d",result);
}
int add (int a,int b ) 
{
int sum;
//
//printf("enter a and b values\n");
//scanf("%d%d",&a,&b);
sum=a+b;
//printf("\n The sum is %d", sum);
return sum;
}