#include<stdio.h>
#include<conio.h>
int print(int num);
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    printf("%d",print(num));
}
int print(int num)
{
    int x;
    if(num>0)
     {x=(num*2-1);
     return (x+print(num-1));}
     
    else
     return 0;
}