#include<stdio.h>
#include<conio.h>

int main()
{
    char k;
    printf("Enter a character or digit or special character\n");
    scanf("%c",&k);
    if(k>64&&k<91)
     printf("Uppercase");
    if(k>96&&k<123)
     printf("Lowercase");
    if(k>48&&k<57)
     printf("Digit");
    if(k>31&&k<47||k>57&&k<65||k>93&&k<96||k>122&&k<128)
     printf("Special character");
    return 0;    
}