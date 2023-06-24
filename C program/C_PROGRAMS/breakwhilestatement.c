#include<stdio.h>
int main()
{
    int a,i,sum=0;
while(1)
{
    printf("enter a number:");
    scanf("%d",&a);
    if(a==0){
        break;
    }
    sum+=a;
    }
    printf("%d",sum);
}