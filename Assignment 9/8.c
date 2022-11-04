#include<stdio.h>
#include<conio.h>

int main()
{
   int n;
   printf("Enter a number\n");
   scanf("%d",&n);
   switch(n<0)
   {
    case 1 : printf("%d",-(n));
             break;
    case 0 : printf("%d",-(n));
             break;
    }

   
}