#include<stdio.h>
#include<conio.h>
int power(int num, int pow);
int main()
{
    int num,pow;
    printf("Enter number and its power\n");
    scanf("%d%d",&num,&pow);
    printf("%d",power(num, pow));
    return 0;
}
int power(int num, int pow)
{
    if(pow>=1)
     return (num*power(num,pow-1));
    else
     return 1;
}