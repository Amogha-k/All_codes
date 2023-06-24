#include<stdio.h>
int main()
{
    int i,sum=0;
    for(i=2;i<100;i=i+3)
    {
        sum=sum+i;
    }
    printf("the sum is %d",sum);
}