#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c;
    printf("Enter coefficients of euation\n");
    scanf("%d%d%d",&a,&b,&c);
    if((b*b-4*a*c)>0)
     printf("Roots are real and distinct");
    if((b*b-4*a*c)==0)
     printf("Roots are real and equal");
    if((b*b-4*a*c)<0)
     printf("Roots are imaginary");
    return 0;
}