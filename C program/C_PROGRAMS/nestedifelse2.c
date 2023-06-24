#include<stdio.h>
int main()
{
   int a,b;
   printf("enter two numbers");
   scanf("%d%d",&a,&b);
   //checking whether two numbers are equal
   if(a==b)
   {
    printf("result=%d=%d",a,b);
   } else{
    if(a>b){
        printf("result:%d>%d",a,b);

    }
    else{
        printf("result=%d<%d",a,b);
    }
   }
}