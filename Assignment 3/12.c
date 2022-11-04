#include<stdio.h>
#include<conio.h>

int main()
{
    char k;
    printf("Enter any alphabet\n");
    scanf("%c",&k);
    if(k>64&&k<91)
     printf("Uppercase");
    if(k>96&&k<123)
     printf("Lowercase");
     return 0;
    
}