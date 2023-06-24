#include<stdio.h>
int main()
{
    int sum=0;
    for(int i=2;i<100;i=i+3)
    {
        sum=sum+i;
    }
    printf("%d",sum);
}