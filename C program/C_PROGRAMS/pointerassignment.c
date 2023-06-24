#include<stdio.h>
int main(){
    int a =10,b=5;
    int *p,*q;
    p=&a;
    q=&b;
    *q=*p;
    printf("a is %d  %d  %d  %d",a,b,*p,*q);

}
