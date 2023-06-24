#include<stdio.h>
struct student
{
    int rollnumber;
    char name[20];
    float marks;
};
void main()
{
   struct student s1={1,"jenny",99};
   struct student *ptr=&s1;

   printf("info of s1\n");
   printf("%d %s %f",(*ptr).rollnumber,ptr->name,ptr->marks);

}
