#include<stdio.h>
#include<conio.h>

int main()
{
    int count,n;  //i for tracing,count for counting 
    printf("Enter a number\n");
    scanf("%d",&n);
   count=0;
   while(n)
    {
        n=n/10;  
        count++;
    }
    printf("%d",count);

}