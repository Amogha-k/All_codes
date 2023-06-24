#include<stdio.h>
int main()
{
    int a,b,*p1,*p2,x,y,z;
    a=15;
    b=10;
    p1=&a;
    p2=&b;
    x=*p1**p2-6;
    y=4-*p2/ *p1 +10 ;
    printf("%d  %d",x,y);

}