#include<stdio.h>
#include<conio.h>

int main()
{
    int var;
    printf("Enter given number\n");
    printf("1. good\n");
    printf("2. better\n");
    printf("3. best\n");
    scanf("%d",&var);
    switch(var)
    {
        case 1: printf("good");
                break;
        case 2: printf("better");
                break;
        case 3: printf("best");
                break;
        default: printf("Invalid number");

    }


}