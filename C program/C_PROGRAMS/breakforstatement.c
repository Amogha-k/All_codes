#include<stdio.h>
int main()
{
    int i,a,sum=0;
    for(i=1;i<=5;i++)
    {
        printf("enter a number=");
        scanf("%d",&a);
        if(a<0){
            break;
        }
        else{
            sum+=a;
        }


    }
    printf("%d",sum);
}