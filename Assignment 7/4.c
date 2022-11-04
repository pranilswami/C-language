#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,n,i,c=0;
    printf("Enter two number\n");
    scanf("%d%d",&a,&b);
    n=a>b?a:b;
    for(i=2; i<n; i++)
    {
        if(a%i==0 && b%i==0)
         c=i;
         
    }
    if(i==n)
     printf("HCF is 1");
    else
     printf("HCF is %d",c);
}