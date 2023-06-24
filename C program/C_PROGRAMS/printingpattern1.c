#include<stdio.h>
int main()
{
    int i,j,a;
    printf("enter a number=");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=5;j>=i;j--){
            printf("*");

        }printf("\n");
    }
}