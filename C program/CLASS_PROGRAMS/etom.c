#include<stdio.h>
int main(){
    char ch1,ch2;
    char a[3];
    printf("enter the elements\n");
    for(int i=0;i<3;i++)
    {
    scanf("%c",&a[i]);
    }
    ch1=a[0];
    ch2=a[2];
    while(ch1<=ch2)
    {
        ch1++;
        printf("%c %d\n",ch1,ch1);
    }
}