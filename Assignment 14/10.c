#include<stdio.h>
#include<conio.h>

int main()
{
    int num, i,j;
    printf("Enter size of array\n");
    scanf("%d",&num);
    printf("Enter values of the array\n");
    int arr1[num],arr2[num];
    for(i=0; i<num; i++)
        scanf("%d",&arr1[i]);
    for(i=0; i<num; i++)
        arr2[i]=arr1[i];
    printf("Values of first array is copied into the second one\n");
    for(i=0; i<num; i++)
        printf("%d ",arr2[i]);


}