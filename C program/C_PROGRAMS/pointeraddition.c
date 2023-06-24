#include<stdio.h>
int main()
{
    int a[5]={5,4,3,7,1};
    int *p ,i;
    p=&a[0];
    //printf("%d\n",*p);
   // p=p+1;
    //printf("%d\n",*p);
    for(i=0;i<5;i++)
    {
        printf("%d\n",*(p+i));
       // p++;
    }
}
