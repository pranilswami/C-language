#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i=0,n=0,sum=0,*ptr,large=0;
    printf("Enter no. of data do you want enter\n");
    scanf("%d",&n);
    ptr=(int *)calloc(n,sizeof(int));
    printf("Enter data\n");
    for(i=0; i<n; i++)
    scanf("%d",&ptr[i]);
    large=ptr[0];
    for(i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(ptr[j]>large)
            large=ptr[j];

        }
        
    }
    printf("\nLargest no. is %d",large);
    free(ptr);
    return 0;
}