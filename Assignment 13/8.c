#include<stdio.h>
#include<conio.h>
int  fibo(int num);
int main()
{
    int num,i;
    printf("Enter a number\n");
    scanf("%d",&num);
    for(i=1; i<=num; i++)
    printf("%d ",fibo(i));
}
int  fibo(int num)
{
    if(num==1 || num ==2)
     return 1;
    return (fibo(num-1)+fibo(num-2));
}