#include<stdio.h>
int main(){
    void *vp;
    int a=5;
    float b=1.32456;
    char c='c';

    vp=&a;
    printf("a=%d\n",*(int*)vp);
    vp=&b;
    printf("a=%f\n",*(float*)vp);
    vp=&c;
    printf("a=%c\n",*(char*)vp);
    return 0;
}