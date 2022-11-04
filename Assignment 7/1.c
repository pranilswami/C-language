#include<stdio.h>
#include<conio.h>

int main()
{
    int a=0,b=1,c,i,n;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=1; i<n; i++)
    { c=a+b;
      a=b;
      b=c;
    }
    printf("%d",c);

}