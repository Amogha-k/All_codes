#include<stdio.h>
int avg(int[],int);
void main()
{
    int average;
    int marks[5]={10,15,20,30,45};
    average=avg(marks,5);
    printf("average is equal to=%d",average);
}
int avg(int marks[],int n)
{
   int sum=0;
   int average=0;
   int i;
   for(i=0;i<n;i++){
    sum+=marks[i];
   }
   average=sum/n;
   return average;
}