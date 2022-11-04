#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    if(n&1==1)
      printf("Odd number");
    else
    printf("Even number");
    return 0;
}