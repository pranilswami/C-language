#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    if(n>0)
     printf("Positive");
    else if(n<0)
     printf("Negative");
    else
     printf("Zero");
     return 0;

}