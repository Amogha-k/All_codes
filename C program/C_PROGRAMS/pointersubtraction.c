#include<stdio.h>
int main(){
    int a[5]={1,23,4,5,6,};
    int d,s;
    int *p=a;
    int *q=&a[3];
    d=p-q;
    s=q-p;
    printf("sub is = %d  %d",d,s);


}