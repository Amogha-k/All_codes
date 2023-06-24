#include<stdio.h>
int main()
{
    int i=2,sum=0;
    while(i<100)
    {
        sum=sum+i;
        i=i+3;
    }
    printf("%d",sum);
}