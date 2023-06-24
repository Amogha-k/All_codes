#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    printf("enter the elements of A \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[3][3]);
        }
    }
    printf("enter the elements of B \n");
     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[3][3]);
        }
    }
    printf("The sum of two matrix  \n ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
             // c[i][j]=0;
            //c[i][j]=a[i][j]+b[i][j];
           printf("%d\t",a[i][j]+b[i][j]);
        }printf("\n");
    }
}