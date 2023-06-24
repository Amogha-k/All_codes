//do while loop
#include<stdio.h>
int main()
{
    int i=2;
    int sum=0;
    do
    {
        sum+=i;
        i+=3;
    }
    while(i<100);
    printf("sum of n numbers =%d",sum);
}