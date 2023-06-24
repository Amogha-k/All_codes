#include<stdio.h>
int fun(int);
int main()
{
    printf("%d",fun(5));
}
int fun(int n)
{
    int s;
    if(n==1)
    return 1;
    s=n*fun(n-1);
    return s;
}