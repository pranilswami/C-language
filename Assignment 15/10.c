#include<stdio.h>
#include<conio.h>
void frequency(int arr[],int size);
int main()
{
    int i,size;
    printf("Enter size of array\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d numbers of array\n",size);
    for(i=0; i<size; i++)
        scanf("%d",&arr[i]);
    frequency(arr,size);
}
void frequency(int arr[],int size)
{
    int i,j,count;
    for(i=0; i<size; i++)
    {
        count=1;
        for(j=0; j<size; j++)
        {
            if(j!=i)
            {
                if(j<i)
                {
                    if(arr[i]==arr[j])
                     break;
                }
                else
                {
                    if(arr[i]==arr[j])
                     count++;
                }
                
            }

        }
         printf("\nfrequency of %d is %d",arr[i],count);

    }
}