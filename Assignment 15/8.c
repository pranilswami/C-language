#include<stdio.h>
#include<conio.h>
void unique(int arr[],int size);
int main()
{
    int i,size;
    printf("Enter size of array\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d number of array\n",size);
    for(i=0; i<size; i++)
        scanf("%d",&arr[i]);
    unique(arr,size);
}
void unique(int arr[],int size)
{
    int i,j,count;
    printf("Unique numbers are\n");
    for(i=0; i<size; i++)
    { count=0;
        for(j=0; j<size; j++)
        {
            if(j!=i)
            {
                if(arr[j]==arr[i])
                {  count++;
                   break;
                }
            }
        }
        if(count==0)
        printf("%d ",arr[i]);
    }
}