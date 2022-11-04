#include<stdio.h>
#include<conio.h>
int biggestnum(int arr[], int);
int main()
{
    int size,i;
    printf("Enter the size of array\n");
    scanf("%d",&size);
    printf("Enter the %d numbers of the array\n",size);
    int arr[size];
    for(i=0; i<size; i++)
        scanf("%d",&arr[i]);
    printf("%d is maximum number",biggestnum(arr, size));

}
int biggestnum(int arr[], int size)
{
    int i,j,max;
    max=arr[0];
    for(i=1; i<size; i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    return max;

}