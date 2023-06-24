#include<stdio.h>
struct student
{
   int age;
   char name[20];
   float marks;
};
void main()
{
    struct student s1;
   printf("%d",sizeof(s1));
}
