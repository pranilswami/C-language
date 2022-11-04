#include<stdio.h>
#include<conio.h>
int hcf(int num1, int num2);
int main()
{
    int num1,num2;
    printf("Enter two number\n");
    scanf("%d%d",&num1,&num2);
    printf("hcf is %d",hcf(num1,num2));
    return 0;
}
int hcf(int num1, int num2)
{
    if(num2!=0)
     return hcf(num2, num1%num2);
    else
     return num1;
}