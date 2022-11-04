#include<stdio.h>
#include<conio.h>

int main()
{
    int f1=0,f2=1,f3,n;// f1,f2 and f3 first three numbers of series
    printf("Enter a number\n");
    scanf("%d",&n);
    if(n==0)
     printf("Fibonacci number");
    f3=f1+f2;
    while(f3<n)
    {
        f1=f2;
        f2=f3;
        f3=f1+f2;
    }
    if(f3==n)
     printf("Fibonacci number");
    else
     printf("Not Fibonacci number");
   
}