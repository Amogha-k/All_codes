#include<stdio.h>
int* returnpointer(int[]);
main()
{
    int *p;
    int array[]={1,2,3,4,5};
    p=returnpointer(a);
    printf("%d",*p);
}
int* returnpointer(int a[])
{
    int a;
    a=a+2;
    return a;
}