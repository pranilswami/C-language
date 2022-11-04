#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,i;
    printf("Enter a number\n");
    scanf("%d%d",&a,&b);
    for(i=2; i<=a*b; i++)
     {
        if(i%a==0 && i%b==0)
       {
         printf("LCM is %d",i);
         break;
       }
     }
}