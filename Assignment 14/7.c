#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[10],i,j,temp;
    printf("Enter 10 number\n");
    for(i=0; i<10; i++)
        scanf("%d",&arr[i]);
    for(i=0; i<10; i++)
    { 
        for(j=i+1; j<10; j++)
        {
            if(arr[j]>arr[i])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }    
    }
    printf("%d is second largest number",arr[1]);
}