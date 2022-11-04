#include<stdio.h>
#include<conio.h>
void prime(int num1, int num2);
int main()
{
    int num1, num2;
    printf("Enter two number\n");
    scanf("%d%d",&num1,&num2);
    prime(num1,num2);
}

void prime(int num1, int num2)
{
    int i,j;
    for(j=num1; j<=num2; j++)
    {
        for(i=num1-1; i>1; i--)
        {
            if(j%i==0)
             break;
        }
        if(i==1)
         printf("%d ",j);
    }
}