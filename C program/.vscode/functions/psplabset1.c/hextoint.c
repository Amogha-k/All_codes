#include<stdio.h>
int main()
{
  int n;
  char hexdigit;
  printf("enter the hexdigit in the range of 0-f");
  scanf("%c",&hexdigit);
  n=hexdigit<'a'?hexdigit-'0':hexdigit-'a'+10;
  printf("integer for entered hexdigit is %d",n);
  return 0;
}