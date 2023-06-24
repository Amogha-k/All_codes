#include<stdio.h>
int sum(int,int);
void main()
{
    int a,b,s;
    printf("enter a & b");
    scanf("%d %d",&a,&b);
    s=sum(a,b);
printf("the sum is =%d",s);
}
int sum(int x,int y)
{
    return x+y;
}