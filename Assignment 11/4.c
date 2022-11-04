//finding next prime number of entered no.
#include<stdio.h>
#include<conio.h>
int nextprime(int num);
int main()
{
    int num,ans=0;
    printf("Enter a number\n");
    scanf("%d",&num);
    printf("Next prime number is %d",nextprime(num));
    return 0;
}
int nextprime(int num)
{
    int i,num1;
    for(num1=num+1; num1>num; num1++)
    {
        for(i=num; i>1; i--)
       {
        if(num1%i==0)
        break;
       }
       if(i==1)
      { 
        return num1;
        break;
      }
    }
}