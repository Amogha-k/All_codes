#include<stdio.h>
int main()
{
    int n,n1,n2,n3,n4,n5;
    int asc=0;
    for(int i=0;i<5;i++)
    {
        printf("enter the number=");
        scanf("%d",&n);
        if(i==0)
        n1=n;
        if(i==1)
        {
            if(n>n1)
            n2=n;
            else
            asc=0;
        }
        if(i==2)
        {
            if(n>n2)
            n3=n;
            else
            asc=0;
        }  
        if(i==3)
        {
            if(n>n3)
            n4=n;
            else
            asc=0;
        }
        if(i==4)
        {
            if(n>n4)
            n5=n;
            else
            asc=0;
        }
    
          if(asc=0)
        {
            printf("not in asc");
            break;
        }  
    }
    if(asc=1)
    {
        printf("it is in asc\n");
        printf("%d %d %d %d %d",n1,n2,n3,n4,n5);
        
    }
}