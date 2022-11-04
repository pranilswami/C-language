#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    if(n>0)
    { if(n%2==0)
       printf("Even");
      else
       printf("Odd");
    }
     else
    printf("%d is neither Even Nor Odd",n);
    return 0;
}