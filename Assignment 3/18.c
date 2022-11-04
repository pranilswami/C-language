#include<stdio.h>
#include<conio.h>

int main()
{
    int n;  //a=31 days, b=30 days, c=28 or 29 days
    printf("Enter month number\n");
    scanf("%d",&n);
    if(n>=1&&n<=7&&n%2!=0||n>=8&&n%2==0)
      printf("31 days");
    else if(n==4||n==6||n==9||n==11)
      printf("30 days");
    else 
      printf("28 or 29 days");
    return 0;
    
}