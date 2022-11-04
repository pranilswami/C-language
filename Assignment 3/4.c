#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    if(n>0)
    {
    if(n&1)
     printf("Odd");
    else 
     printf("Even");
    }
    else
    printf("%d is neither Even Nor Odd",n);
    return 0;
}