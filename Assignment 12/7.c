#include<stdio.h>
#include<conio.h>
void print(int num);
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    print(num);
    return 0;

}
void print(int num)
{
    if(num>0)
    {
        print(num-1);
        printf("%d ",num*num);
    }

}