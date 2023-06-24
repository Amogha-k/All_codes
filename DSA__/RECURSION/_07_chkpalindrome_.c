#include<stdio.h>
int chkpalindrome(char str[],int start,int end)
{
    if(start>=end)
    return 1;
    if(str[start]==str[end])
     chkpalindrome(str,start+1,end-1);
    else return 0;

}
int main()
{
    char a[5]="madam";
    if(chkpalindrome(a,0,4))
    printf("palindrome");
    else
    printf("not a palindrome");
}