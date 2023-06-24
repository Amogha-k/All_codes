#include<stdio.h>
int main()
{
    int sum=0,i=2;
    do
    {
      sum=sum+i;
      i=i+3;
    }while(i<100);
    printf("%d",sum);

}