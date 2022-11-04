#include<stdio.h>
#include<conio.h>

int main()
{
    int n,a,b,c;
    printf("Enter a three digit number\n");
    scanf("%d",&n);
    a=n/100;
    n=n%100;
    b=n/10;
    c=b*100+a*10+n%10;
    printf("%d",c);
}