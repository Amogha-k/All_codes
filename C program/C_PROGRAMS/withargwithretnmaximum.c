#include<stdio.h>
int max(int,int);
int main(){
    max(5,6);
}
int max(int a,int b)
{
    if(a>b)
    printf("a is greater");
    else
    printf("b is greater");
}