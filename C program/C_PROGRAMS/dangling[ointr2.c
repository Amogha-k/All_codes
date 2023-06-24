#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
   {
        int a=9;
        int *ptr;
          ptr=&a;
        printf("a=%d",*ptr);

   }
    printf("%d",*ptr);
}