#include<stdio.h>
int main()
{
    int i = 1;
    char ch='a';
    while(ch<127&&i==1){
        printf("%d\n",ch);
        ch++;
    }
}