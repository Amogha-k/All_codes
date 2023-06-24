#include<stdio.h>
int main(){
    int a=10,b=9,c;
    int *p,*q;
    p=&a;
   q=&b;
   c=*q;
  // *p=20;
      printf("value of a is %d\n",c);
        printf("value of a is %d\n",*p);
    printf("value of a is %d\n",a);

     printf("address of a is %d\n",&a);
     printf("address of a is %x\n",p);
    printf("address of p is %x\n",&p);

}
