#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,temp;                      //Here a and b are variables to store two numbers.temp is temporory variable.
    printf("Enter two number in format a=number b=number \n");
    scanf("a=%d b=%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("After swaping a = %d, b = %d",a,b);
    return 0;
    
}