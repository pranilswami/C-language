//find next prime number of given number
#include<stdio.h>
#include<conio.h>

int main()
{
    int n1,n,i;
    printf("Enter a number\n");
    scanf("%d",&n1);
    n=n1+1;
    while(n)
    {
        for(i=n-1; i>=2; i++)
        {
            if(n%i==0)
            break;
        }
        if(i==1)
        {
            printf("%d",n);
            break;
        }
        n++;
    }
 
}