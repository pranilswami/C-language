#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[10],big=0,i;
    printf("Enter 10 number\n");
    for(i=0; i<10; i++)
     scanf("%d",&arr[i]);
    for(i=0; i<10; i++)
    { 
        if(arr[i]>big)
        big=arr[i];
    }
    printf("Biggest number is %d",big);
    return 0;
    
}