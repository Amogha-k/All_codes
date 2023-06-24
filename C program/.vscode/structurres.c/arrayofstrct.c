#include<stdio.h>
struct student
{
    int rollnumber;
    char name[20];
    float marks;
};
void main()
{
    int i;
    struct student s[3];
    for(i=0;i<3;i++){
        printf("enter the information of the student\n");
        scanf("%d%s%f",&s[i].rollnumber,&s[i].name,&s[i].marks); 
    }
 for(i=0;i<3;i++){
        printf("Information of the student\n");
        printf("%d %s %f\n",s[i].rollnumber,s[i].name,s[i].marks); 
    }

}
