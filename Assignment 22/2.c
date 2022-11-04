#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr,i,n=0,sum=0;
    printf("Enter no. of value do you want to enter\n");
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));
    printf("Enter the value\n");
    for(i=0; i<n; i++)
    scanf("%d",&ptr[i]);
    for(i=0; i<n; i++)
    printf("%d ",ptr[i]);
    for(i=0; i<n; i++)
    sum=sum+ptr[i];
    printf("\nAverage is : %d",sum/n);
    return 0;

}