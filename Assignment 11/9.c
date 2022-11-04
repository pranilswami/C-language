#include<stdio.h>
#include<conio.h>
int square(int);
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("Square is %d",square(n));
    return 0;
}

int square(int n)
{
    return (n*n);
}