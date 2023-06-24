#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int smallest=a[0];
     int largest=a[0];
     for(int i=0;i<10;i++)
     {
     if(smallest>a[i])
     smallest=a[i];
     if(largest<a[i])
     largest=a[i];
     }
printf("%d %d",smallest,largest);
}