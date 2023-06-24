#include<stdio.h>
int main()
{
    int i=2;
    int sum=0;
    while(i<100)
    {
        sum+=i;
        i=i+3;
    }
    printf("sum of n numbers is %d",sum);
}