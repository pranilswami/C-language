#include<stdio.h>
#include<conio.h>
void print(int num);
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    print(num);
}
void print(int num)
{
    int n;
    if(num==0)
     { }
    else
    {
        n=num%10;
        printf("%d",n);
        print(num/10);
    }
}