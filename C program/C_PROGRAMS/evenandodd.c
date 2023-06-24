#include<stdio.h>
int main()
{
    int i,a[10];
    int odd=0,even=0;
    printf("enter 10 numbers=");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);

    }for ( i = 0; i < 10; i++)
    {
        if (a[i]%2==0)
        {
          even++;
        }else{
            odd++;
        }
        
    }
    printf("no of even is=%d\n no of odd is=%d",even,odd);
}