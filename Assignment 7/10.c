//Armstrong number between 1 to 1000
#include<stdio.h>
#include<conio.h>

int main()
{
    int n,n1,i,a,sum=0;
    for(i=1; i<=1000; i++)
    {
        n=i; sum=0;
        
        while(n!=0)
        {
            n1=n%10;
            sum=sum+n1*n1*n1;
            n=n/10;

        }
        if(sum==i)
         printf("%d ",i);
    }

}