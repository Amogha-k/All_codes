#include<stdio.h>
int sum(int n,int ans)
{
    if(n==0)
    return ans;
    sum(n-1,n+ans);
}
int main()
{
    printf("%d",sum(5,0));
}