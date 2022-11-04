#include<stdio.h>
#include<conio.h>
void fibonacci(int num);
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    fibonacci(num);
    return 0;

}
void fibonacci(int num)
{
   int i,num1=-1, num2=1, num3=0;
   for(i=0; i<=num; i++)
   {
       num3=num1+num2;
       printf("%d ",num3);
       num1=num2;
       num2=num3;
    }
}
