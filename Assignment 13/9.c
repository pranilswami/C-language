#include<stdio.h>
#include<conio.h>
int digit(int num);
int main()
{
    int num,count=0;
    printf("Enter a number\n");
    scanf("%d",&num);
    count=digit(num);
    printf("%d",count);
}
int digit(int num)
{
    static int count=0;
    if(num>0)
    {
        count ++;
        (digit(num/10));
    }
    else
     return count;
    
    
     
}