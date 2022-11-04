//TSRS
#include<stdio.h>
#include<conio.h>
float area ( int);
int main()
{
    int a,r;
    printf("Enter radius of circle\n");
    scanf("%d",&r);
    printf("Area is %.2f",area(r));
    return 0;
}
float area(int r)
{
   float a;
   a=3.14*r*r;
   return a;
}
