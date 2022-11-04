#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    if (99<n && n<1000)
     printf("Three Digit Number");
    else
     printf("Not a Three Digit Number");
    return 0;
}