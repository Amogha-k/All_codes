#include<stdio.h>
int n;
int print(int a)
{
    if(a<1)
    return n;

    return 1+print(a/2);
}
int main()
{
    int x;
    x=print(10);
    printf("%d",x);
}