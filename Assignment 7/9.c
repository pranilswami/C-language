//Armstrong number
#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i,n1,sum=0,a;
    printf("Enter a number\n");
    scanf("%d",&n);
    a=n;
    while(n!=0)
    {
        n1=n%10;
        sum=sum+n1*n1*n1;
        n=n/10;
    }
    if(sum==a)
     printf("Armstrong number");
    else
     printf("Not Armstrong number");
}