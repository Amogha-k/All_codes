#include<stdio.h>
int print(int);
int print(int a)
{
    if(a<1)
    return;
    else{
    printf("%d\n",a);
    print(a/2);
    printf("%d\n",a);
}
}
int main(){
    print(10);
}