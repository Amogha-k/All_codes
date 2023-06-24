#include <stdio.h>
int main()
{
	int i;
	int a[5],b[5],sum[5];
	printf("enter the elements of a=");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);}
	printf("enter the elements of b=");
		
		for(i=0;i<5;i++)
		scanf("%d",&b[i]);
	for(i=0;i<5;i++)
		{sum[i]=a[i]+b[i];
		printf("\nthird element at index %d is =%d",i,sum[i]);}
		}3