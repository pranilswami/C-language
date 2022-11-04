#include<stdio.h>
#include<conio.h>

int main()
{
    int N;
    printf("Enter a positive integer number\n");
    scanf("%d",&N);
    printf("Unit digit of given number is %d",N%10);
    return 0;
}