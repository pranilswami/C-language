#include<stdio.h>
#include<conio.h>
int main()
{
    int r;                                          // r is radius of circle
    float a;                                        // a is area of circle
    printf("Enter radius of circle\n");
    scanf("%d",&r);
    a=3.14*r*r;
    printf("Area of circle is %.2f having the radius %d.",a,r);
    return 0;
}