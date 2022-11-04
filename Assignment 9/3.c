#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    printf("1. Monday\n");
    printf("2. Tuesday\n");
    printf("3. Wednesday\n");
    printf("4. Thuresday\n");
    printf("5. Friday\n");
    printf("6. Saturday\n");
    printf("7. Sunday\n");

    printf("Enter a number\n");
    scanf("%d",&n);

    switch (n)
    {
    case 1: printf("Hello!");
            break;
    case 2: printf("Hey Hi!");
            break;
    case 3: printf("Nice to meet you.");
            break;
    case 4: printf("What's going on?");
            break;
    case 5: printf("It's honor to meet you.");
            break;
    case 6: printf("It's pleasure to meet you.");
            break;
    case 7: printf("What's up?");
            break;
    default:
        printf("Invalid number.");
    }
}