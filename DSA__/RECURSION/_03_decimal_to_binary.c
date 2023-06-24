#include<stdio.h>
int decimaltobinary(int num)
{
    if(num==0)
    return 0;
    decimaltobinary(num/2);
    printf("%d",num%2);
}
int main()
{
    decimaltobinary(7);

}