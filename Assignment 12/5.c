#include<stdio.h>
#include<conio.h>
void print(int n);
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    print(n);
}
void print(int n)
{
    if(n>0)
    {
        print(n-1);
        printf("%d ",n*2);
    }
}