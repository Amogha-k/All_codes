#include<stdio.h>
int fact(int n,int ans){
    if(n==0)
    return ans;
    fact(n-1,n*ans);
}
int main()
{
    printf("%d",fact(5,1));
}
