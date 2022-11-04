#include<stdio.h>
#include<conio.h>
int natural(int n);
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    natural(n);
}
int natural(int n)
{
    if(n>0)
    {
        natural(n-1);
        printf("%d ",n);
    }
 
    
}