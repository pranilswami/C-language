#include<stdio.h>

int main()
{
    int arr[100],*p,i,sum=0;
    printf("Enter list of numbers\n");
    for(i=0; i<5; i++)
    scanf("%d",&arr[i]);
    p=&arr[0];
    for(i=0; i<5; i++)
      sum=sum+*(p+i);
    printf("%d",sum);

}