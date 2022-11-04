#include<stdio.h>
#include<conio.h>
int evenodd(int n);
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    if(n>0)
    printf("%d",evenodd(n));
    else
    printf("Invalid number");
    return 0;
}
int evenodd(int n)
{
    
    if(n%2==0)
     return 1;
    else
     return 0; 
}