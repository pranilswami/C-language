#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    printf("Enter a even number\n");
    scanf("%d",&n);

    switch(n%2==0)
    {
        case 1: printf("%d",n+1);
                break;
        case 0: printf("Please enter even number.");
                break;
    }
}