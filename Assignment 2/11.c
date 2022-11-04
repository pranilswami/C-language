#include<stdio.h>
#include<conio.h>

int main()
{
    int n,d;            //n is for storing number and 'd' for adding a digit.
    printf("Enter a number\n");
    scanf("%d%d",&n,&d);
    printf("Number is %d",n*10+d);
    return 0;

}