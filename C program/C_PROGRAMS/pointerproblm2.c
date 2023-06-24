#include<stdio.h>
int main(){
   int a=10;
  const int*p;
      p=&a;
      a=11;
    printf("%d",*p);

}