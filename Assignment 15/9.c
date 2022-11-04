#include<stdio.h>
#include<conio.h>
void merg(int arr1[],int arr2[],int size);
int main()
{
    int i,size;
    printf("Enter a size of array\n");
    scanf("%d",&size);
    printf("Enter first array\n");
    int arr1[size],arr2[size],arr[size*2];
    for(i=0; i<size; i++)
        scanf("%d",&arr1[i]);
    printf("Enter second array\n");
    for(i=0; i<size; i++)
        scanf("%d",&arr2[i]);
    merg(arr1,arr2,size);
}
void merg(int arr1[],int arr2[],int size)
{
    int i,j,arr3[size*2],max,temp;
    for(i=0; i<size; i++)
        arr3[i]=arr1[i];
    for(i=size; i<size*2; i++)
        arr3[i]=arr2[i-size];
    printf("Merged array is : \n");
    for(i=0; i<size*2; i++)
        printf("%d ",arr3[i]);
    printf("\nSorted data in descending order is : \n");
    for(i=0; i<size*2; i++)
    {
        max=arr3[i];
        for(j=i+1; j<size*2; j++)
        {
            if(arr3[j]>max)
            {
                temp=arr3[j];
                arr3[j]=arr3[i];
                arr3[i]=temp;
            }
        }
   
    }
    for(i=0; i<size*2; i++)
        printf("%d ",arr3[i]);
}