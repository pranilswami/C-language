#include<stdio.h>
#include<conio.h>

int main()
{
    int i,n;
    printf("Enter a numbr\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
     printf("%d\n",i*i*i);
    return 0;
}