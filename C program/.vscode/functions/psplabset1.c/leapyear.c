#include<stdio.h>
int main()
{
    int year,result;
    printf("enter the year =");
    scanf("%d",&year);
    result=((year%4==0 && year%100!=0)||year%400==0)?printf("%d it is a leap year\n",year):printf("%d it is not a leap year\n",year);
    return 0;
}
