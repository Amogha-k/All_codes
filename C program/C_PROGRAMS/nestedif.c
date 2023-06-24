#include<stdio.h>
int main()
{
    int age,salary;
    printf("enter your age = ");
    scanf("%d",&age);
    printf("enter your salary=");
    scanf("%d",&salary);
    if(age>50){
        if(salary<60000){
            salary=salary+10000;
            printf("%d,salary");
        }
        else{
            salary=salary+5000;
        }

    }
    else{
        salary=salary+3000;
    }
}