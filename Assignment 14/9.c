#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,temp,n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter %d numbers of array\n",n);
    int arr[n];
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    for(i=n-1; i>=0; i--)
     printf("%d ",arr[i]);
}


