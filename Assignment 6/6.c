#include<stdio.h>
#include<conio.h>

int main()
{
    int sum=1,n,i;
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=n; i>=1; i--)
     sum=sum*i;
    printf("factorial is %d",sum);
}