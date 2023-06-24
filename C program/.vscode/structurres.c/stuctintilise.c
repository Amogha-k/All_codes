#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
    float marks;
}s3={3};
void main()
{
    struct student s1;
    struct student s2={2,"ammu",9.1};
  
    printf("enter information of student 1\n");
    scanf("%d%s%f",&s1.rollno,&s1.name,&s1.marks);
     printf(" information of student 1\n");
     printf("%d  %s  %f\n",s1.rollno,s1.name,s1.marks);
     printf("information of student 2\n");
     printf("%d  %s  %f\n",s2.rollno,s2.name,s2.marks);
  printf("information of student 3\n");
     printf("%d  %s  %f",s3.rollno,s3.name,s3.marks);

}
