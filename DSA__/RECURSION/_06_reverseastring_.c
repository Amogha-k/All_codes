#include<stdio.h>
void reverse(char *str,int i,int n)
{
    if(i==n/2)
    return;
    swap(&str[i],&str[n-i-1]);
    return (str,i+1,n);
}
int main()
{
    reverse("amogh",0,5);
    
}