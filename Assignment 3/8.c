#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    printf("Enter a year\n");
    scanf("%d",&n);
    if(n%4==0)
    printf("%d is Leap Year",n);
    else
    printf("%d is Not Leap Year",n);
    return 0;
}