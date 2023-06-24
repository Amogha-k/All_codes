#include<stdio.h>
int main()
{
    int r,s;
    char ch;
    float area;
    printf("enter s for square or c for circle\n");
    scanf("%c",&ch);
    if(ch=='c'||ch=='C')
    {
      printf("enter the radius of circle\n");
      scanf("%d",&r);
      area=3.14*r*r;
      printf("the area of circle is %f\n",area);
      
    }
     else if (ch =='s'||ch =='S')
    {
        printf("enter the side of the square =\n");
        scanf("%d",&s);
        area=s*s;
        printf("the area of the square is %f\n",area);
    }
    return 0;
}