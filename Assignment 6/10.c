#include<stdio.h>
#include<conio.h>

int main()
{
    int n,a;
    printf("Enter a number\n");
    scanf("%d",&n);
    while(n)
    {
        a=n%10;
        printf("%d",a);
        n=n/10;
    }

}