#include<stdio.h>
#include<conio.h>
void duplicate(int arr[],int size);
int main()
{
    int i,size;
    printf("Enter size of array\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d numbers of array\n",size);
    for(i=0; i<size; i++)
        scanf("%d",&arr[i]);
    duplicate(arr,size);
    
}
void duplicate(int arr[],int size)
{
    int i,j,count=0;
    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            if(j!=i)
            {
                if(j<i)
                {
                    if(arr[j]==arr[i])
                    break;
                }
                else
                {
                    if(arr[j]==arr[i])
                    count++;
                }
            }
        }
    }
    printf("Total number of duplicates are %d",count);
}