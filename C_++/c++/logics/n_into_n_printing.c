#include<stdio.h>
int  main()
{
    int n,j,i;
    //printf("enter the number");
    scanf("%d",&n);
    for( i=0;i<n;i++)
    {
        
        
      for(j=0;j<n;j++) 
        {
            if(i==j)
            {
                printf("*");
            }
            else if(i==j && i+j==n-1)
                continue;

            
            else if(i+j==n-1)
            {
                printf("*");
                
            }
            else
            printf(" ");
        }printf("\n");
        
    }
    
}