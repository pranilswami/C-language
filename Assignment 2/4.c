#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b;
    printf("Enter two number in format a=number b=number \n");
    scanf("a=%d b=%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swaping a=%d, b=%d",a,b);
    return 0;

}