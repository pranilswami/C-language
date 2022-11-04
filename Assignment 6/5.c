#include<stdio.h>
#include<conio.h>

int main()
{
    int i,n,sum=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
     sum=sum+i*i*i;
    printf("%d",sum);
    return 0;

}