#include<stdio.h>
int main()
{
    char a[10],b[10];
    int i=0;
    scanf("%s",a);
 for(i=0;a[i]!='\0';i++)
   {
       b[i]=a[i];
      
   }
 printf("Copied string=%s",b);
    return 0;
}