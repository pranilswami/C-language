#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    if(n%3==0&&n%2==0)
     printf("%d is divisible by 2 & 3",n);
    else
     printf("%d is not divisible by 2 & 3",n);     
    return 0;
}