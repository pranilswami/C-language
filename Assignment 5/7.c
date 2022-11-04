#include<stdio.h>
#include<conio.h>

int main()
{
    int i,n;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=n*2; i>=1; i-=2)
     printf("%d\n",i);
    return 0;
}