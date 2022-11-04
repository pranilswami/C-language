#include<stdio.h>
#include<conio.h>
int smallest(int arr[],int size);
int main()
{
    int i,size;
    printf("Enter size of array\n");
    scanf("%d",&size);
    printf("Enter %d numbers of array\n",size);
    int arr[size];
    for(i=0; i<size; i++)
        scanf("%d",&arr[i]);
    printf("%d is smallest number",smallest(arr,size));
}
int smallest(int arr[],int size)
{
    int i,min;
    min=arr[0];
    for(i=1; i<size; i++)
    {
        if(arr[i]<min)
        min=arr[i];
    }
    return min;
}