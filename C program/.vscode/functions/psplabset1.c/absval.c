#include<stdio.h>
int main()
{
    int n;
    unsigned int absval;
    printf("enter a number =");
    scanf("%d",&n);
    absval=n<0?-1*n:n;
    printf("absolutse value of enterd integer is %d",absval);
}