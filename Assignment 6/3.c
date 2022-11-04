#include<stdio.h>
#include<conio.h>

int main()
{
    int i,n,sum=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=1; i<=n*2; i+=2)
     sum=sum+i;
    printf("Sum of first %d odd natural number is %d",n,sum);
    return 0;
}