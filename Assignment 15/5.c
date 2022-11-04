#include<stdio.h>
#include<conio.h>
int duplicate(int arr[], int size);
int main()
{
    int i,size,num;
    printf("Enter the size of an array\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the %d numbers of array\n",size);
    for(i=0; i<size; i++)
        scanf("%d",&arr[i]);
    num=duplicate(arr,size);
    if(num==-1)
        printf("There is no adjacent duplicate value in array\n");
    else
        printf("%d is duplicate",num);

}
int duplicate(int arr[], int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        if(arr[i]==arr[i+1])
            return arr[i];
    }
    return -1;
}