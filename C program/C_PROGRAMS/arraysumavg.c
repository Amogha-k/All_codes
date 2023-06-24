#include<stdio.h>
int main(){
    int i,sum=0,n,avg;
    printf("enter no of elements of array=");
    scanf("%d",&n);
    int a[n];
    printf("enter elements of an array=");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("sum is=%d",sum);
    avg=sum/n;
    printf("%d",avg);
}