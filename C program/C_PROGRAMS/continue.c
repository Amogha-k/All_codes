#include <stdio.h>
int main()
{
    int i,a,sum=0;
    for(i=1;i<=5;i++)
    {
        printf("enter an integer");
        scanf("%d",&a);
        if(a<0){
            continue;
        }else{
            sum+=a;
        }
    }printf("sum is =%d",sum);
}