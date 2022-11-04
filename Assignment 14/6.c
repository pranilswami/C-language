#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,arr[10],temp;
    printf("Enter 10 number\n");
    for(i=0; i<10; i++)
        scanf("%d",&arr[i]);
    for(i=0; i<10; i++)
    {
        for(j=i+1; j<10; j++)
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