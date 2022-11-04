#include<stdio.h>
#include<conio.h>
int factorial(int n);
int main()
{
   int n;
   printf("Enter a number\n");
   scanf("%d",&n);
   printf("Factorial is %d",factorial(n));
   return 0;
}

int factorial(int n)
{
    int i,sum=1;
    for(i=n; i>=1; i--)
    sum = sum*i;
    return sum;
}