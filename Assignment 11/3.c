#include<stdio.h>
#include<conio.h>
int prime(int num);
int main()
{
    int num,ans=0;
    printf("Enter a number\n");
    scanf("%d",&num);
    ans=prime(num);
    if(ans==1)
     printf("%d is Prime number",num);
    else 
     printf("%d is Not Prime number",num);

     return 0;
}
int prime(int num)
{
    int i;
    for(i=num-1; i>1; i--)
    {
        if(num%i==0)
        break;
    }
    if(i==1)
    return 1;
    else
    return 0;
}