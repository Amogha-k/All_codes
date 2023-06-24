#include<stdio.h>
int  *returnpointer(int[]);
int main()
{
    int *p;
    int array[]={1,2,3,4,5};
    p=returnpointer(array);
    printf("%d",*p);
}
int *returnpointer(int a[])
{
    a=a+2;
    return a;
}