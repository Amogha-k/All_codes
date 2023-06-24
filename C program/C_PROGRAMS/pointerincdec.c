#include<stdio.h>
int main(){
    int a[]={2,3,67,8,56};
    int *p;
    p=&a[3];
   
    //right to left
    printf("%d  %d\n",*p++,*p--);
    printf("%d",*p);
    }