#include<stdio.h>
#include<conio.h>
int fact(int num);
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    printf("%d",fact(num));
    return 0;
}
int fact(int num)
{
    if(num==1)
     return 1;
    else
     return (num*fact(num-1));
}