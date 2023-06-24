#include<stdio.h>

int main()
{
	char str[10];
	scanf("%s", str);
      int i=0;
	//Write your code here
	while(str[i]!='\0')
	{
	    if(str[i]>65 && str[i]<90)
	      str[i]=str[i]+32;
	    else
	       str[i]=str[i]-32;
	   i++;
	}
	printf("%s",str);
	return 0;
}