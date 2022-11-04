#include<stdio.h>
#include<conio.h>
int sum(int num);
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    printf("%d",sum(num));
    return 0;
}
int sum(int num)
{
    int n;
    if(num>0)
    {
        n=num%10;
        return(n+sum(num/10));
    }
}