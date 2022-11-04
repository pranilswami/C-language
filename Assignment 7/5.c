#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,n,i,c;
    printf("Enter a number\n");
    scanf("%d%d",&a,&b);
    n=a>b?a:b;
    for(i=2; i<n; i++)
    {
        if(a%i==0 && b%i==0)
         break;
    }
    if(i==n)
     printf("Co-prime number");
    else
     printf("No Co-prime number");
}