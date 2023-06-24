
#include<stdio.h>
#include<conio.h>
char *x="This String is declared externally \n\n";
void main()
{
static char *y="This string is declared within main";

printf("%s",x);
printf("%s",y);
getch();
}