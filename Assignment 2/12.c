#include<stdio.h>
#include<conio.h>

int main()
{
    //Here 1 USD = 76.23 INR
    float i,u;   // Here 'i' is the INR and 'u' for USD
    printf("Enter the INR to convert into USD\n");
    scanf("%f",&i);
    u=i/76.23;
    printf("USD is %.2f",u);
    return 0;

}