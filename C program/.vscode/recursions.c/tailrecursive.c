#include<stdio.h>
int print(int a)
{
    if(a<1)
    return;
    else{
    printf("%d\n",a);
    print(a/2);//no task after this
}
}
int main(){
    print(10);
}