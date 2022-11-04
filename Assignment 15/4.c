#include<stdio.h>
#include<conio.h>
void rotate(int arr[],int size);
int main()
{
    int size,i;
    printf("Enter size of an array\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the %d numbers of array\n",size);
    for(i=0; i<size; i++)           // This loop for taking all the values of array 
        scanf("%d",&arr[i]);
    rotate(arr,size);               // Calling rotate funtion by passing array and it's size
}
void rotate(int arr[],int size)
{
    int i,j,temp,num,d;
    printf("Enter number of rotations do you want\n");
    scanf("%d",&num);
    printf("Enter the direction of rotation\n1.left\n2.right\n");
    scanf("%d",&d);
    for(i=1; i<=num; i++)           // This loop for number of rotation
    {
        if(d==1)
        {
            temp = arr[0];
            for(j=0; j<size-1; j++)
            {
                arr[j]=arr[j+1];
            }
            arr[size-1] = temp;
        }
        else if(d==2)
        {
            temp = arr[size-1];
            for(j=size-1; j>=0; j--)
            {
                arr[j]=arr[j-1];
            }
            arr[0] = temp;
        }
        else
        { printf("Invalid number\n");
         printf("Enter between 1 or 2");
         }

    }
    for(i=0; i<size; i++)
        printf("%d ",arr[i]);

}