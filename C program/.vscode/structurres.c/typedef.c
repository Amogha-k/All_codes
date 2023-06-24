#include<stdio.h>
 typedef struct student
 {
    int roll;
    char name[20];
    float marks;
 }stu;
 void main()
 {
stu s={1,"amogh",99};
printf("%d %s %f",s.roll,s.name,s.marks);
 }