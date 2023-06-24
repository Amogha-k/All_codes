#include<stdio.h>
int main()
{
    int i,j,a;
    printf("enter number of rows=");
    scanf("%d",&a);
    for(i=a;i>=1;i--)
    {
        for ( j =1; j<=i; j++)
        {
            printf("*");

        }
        printf("\n");
    }
}