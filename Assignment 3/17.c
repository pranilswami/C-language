#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c;  // a,b,c are sides of triangle
    printf("Enter three sides of triangle\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c&&a+c>b&&b+c>a)  // Triangle Enequality Theorem
     printf("Valid triangle");
    else
     printf("Invalid triangle");
     return 0;
}