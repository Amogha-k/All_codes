#include<stdio.h>
char* display();
void main(){
    char* str;
    str=display();
    printf("the string is %s",str);

}
char* display()
{
    char* str="jenny";
    return str;
}