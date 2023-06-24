#include<stdio.h>
int main(){
    int a[]={5,6,2,8,6,10};
    int *p;
    p=&a[2];
    printf("%d %d %d %d %d",a[1],*--p,(*p)++,*--p,a[1]);
}