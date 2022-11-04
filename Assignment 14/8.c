#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,num,temp;
    printf("Enter size of the array\n");
    scanf("%d",&num);
    printf("Enter %d numbers of array\n",num);
    int arr[num];
    for(i=0; i<num; i++)
        scanf("%d",&arr[i]);
    for(i=0; i<num; i++)
    {
        for(j=i+1; j<num; j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    printf("%d is the second smallest number\n",arr[1]);
            
}