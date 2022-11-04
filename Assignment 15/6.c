#include<stdio.h>
#include<conio.h>
void reverse(int arr[],int size);
int main()
{
    int i,size;
    printf("Enter the size of an array\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d number of the array\n",size);
    for(i=0; i<size; i++)
        scanf("%d",&arr[i]);
    reverse(arr,size);
    return 0;
}
void reverse(int arr[],int size)
{
    int i,num,temp,j;
    for(i=size-1; i>=0; i--)
        printf("%d ",arr[i]);
}