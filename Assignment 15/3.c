#include<stdio.h>
#include<conio.h>
void sort(int arr[],int size);
int main()
{
    int i,size;
    printf("Enter the size of an array\n");
    scanf("%d",&size);
    printf("Enter %d numbers of array\n",size);
    int arr[size];
    for(i=0; i<size; i++)
        scanf("%d",&arr[i]);
    sort(arr,size);
}
void sort(int arr[],int size)
{
    int i,min,j,temp;
    
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
        printf("%d ",arr[i]);
    }
}