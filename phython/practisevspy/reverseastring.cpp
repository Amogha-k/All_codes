#include<stdio.h>

int main()
{
	char str[10];
	scanf("%s", str);
	char temp;
int i,len=0;
	//Write your code here
for(i=0;str[i]!='\0';i++)
{
    len++;
}
for(i=0;i<len/2;i++)
{
    temp=str[i];
    str[i]=str[len-i-1];
    str[len-i-1]=temp;
}
printf("%s",str);
	return 0;
}