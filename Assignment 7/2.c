#include<stdio.h>
#include<conio.h>

int main()
{
   int a=0,b=1,c=1,n,i;
   printf("Enter a numeber\n");
   scanf("%d",&n);
   for(i=1; i<=n; i++)
   {
      printf("%d ",c);
      c=a+b;
      a=b;
      b=c;
   } 
}