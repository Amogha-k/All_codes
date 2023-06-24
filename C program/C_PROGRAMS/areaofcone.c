#include<stdio.h>
int main(){
    int radius,height;
    printf("enter the radius of the cone=\n");
    scanf("%d",&radius);
    printf("enter the height=\n");
    scanf("%d",&height);
    printf("the area of cone is=%f",3.14*radius*radius+3.14*radius*height);
    return 0;
}
