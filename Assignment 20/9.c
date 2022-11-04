#include<stdio.h>

int main()
{
    int arr[100],*p,i;
    printf("Enter 5 numbers\n");
    for(i=0; i<5; i++)
    scanf("%d",&arr[i]);
    p=&arr[0];
    for(i=4; i>=0; i--)
    printf("%d ",p[i]);

}