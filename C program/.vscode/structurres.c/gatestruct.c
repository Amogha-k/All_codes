#include<stdio.h>
struct student
{
    int a;
    float b;
    int c;
};
void main()
{
    struct student q={.b=1.99,.c=20,.a=45};
    //disignated location
    printf("%d %f %d",q.a,q.b,q.c);
}