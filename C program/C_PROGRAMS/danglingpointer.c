#include<stdio.h>
#include<stdlib.h>
int main(){
   // int *ptr=(int*)malloc(size of (int));
     int *ptr;
     int a=10;
     ptr=&a;
    printf("%d\n",*ptr);
    free(ptr);//dangling pointer
    printf("%d\n",*ptr);

}