#include<stdio.h>
int strlenght(char str[],int i)
{    static int length=0;
    if(str[i]=='\0')
     return length;
    ++length;
   return strlenght(str,i+1);
}
int main()
{
   char a[5]="amogh";
   printf("%d",strlenght(a,1));
}
