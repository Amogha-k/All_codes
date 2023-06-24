#include<stdio.h>
int modulu(int num,int den)
{
    if(num<den)
    return num;
    modulu(num-den,den);
}
int main()
{
    printf("%d",modulu(10,4));
}