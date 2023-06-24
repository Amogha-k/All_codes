#include<stdio.h>
int main()
{int m;
    scanf("%d",&m);
    if (m>0)
    printf("Positive");
    else if(m<0)
    printf("Negative");
    else
    printf("Neither positive nor negative");
}