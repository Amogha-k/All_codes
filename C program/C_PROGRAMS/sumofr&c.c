#include<stdio.h>
int main()
{
    int a[3][3],i,j,sr,sc;
    printf("enter the matrix");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
        {
            scanf("%d",& a[i][j]);
        }
    }
    printf("the matrix is=");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d",a[i][j]);
        }
    }
    for(i=0;i<3;i++){
        sr=sc=0;
        
        for(j=0;j<3;j++){
            sr+=a[i][j];
            sc+=a[j][i];
            
        }printf("sr=%d \n sc=%d",sr,sc);
    }
}