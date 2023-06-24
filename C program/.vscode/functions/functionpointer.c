
#include <stdio.h>
int sum(int, int);
void main()
{
    int s = 0;
    int (*z)(int, int) = sum;
    s = z(1,2);
    printf("sum=%d", s);
}
int sum(int a, int b)
{
    return a + b;
}