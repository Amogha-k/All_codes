#include<stdio.h>
int main()
{
    int i,j,rows,number=1;
    printf("entr no of rows===");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            printf("%d",number);
            number++;
        }printf("\n");
    }
}