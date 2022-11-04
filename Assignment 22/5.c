#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,n=0,sum=0,*ptr;
    printf("Enter no. of data do you want enter\n");
    scanf("%d",&n);
    ptr=(int *)calloc(n,sizeof(int));
    printf("Enter value\n");
    for(i=0; i<n; i++)
    scanf("%d",&ptr[i]);
    for(i=0; i<n; i++)
    printf("%d ",ptr[i]);
    for(i=0; i<n; i++)
    sum=sum+ptr[i];
    printf("\nSum of %d value is : %d",n,sum);
    free(ptr);
    return 0;
}