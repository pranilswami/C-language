#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,sum,num;
    printf("Enter the order of matrix\n");
    scanf("%d",&num);
    int arr[num][num];
    printf("Enter all the coefficient of matrix\n");
    for(i=0; i<num; i++)
     for(j=0; j<num; j++)
      scanf("%d",&arr[i][j]);
    printf("Upper triangle : \n");
    for(i=0; i<num; i++)
    {
        for(j=0; j<num; j++)
        {
            if(i==j || j>i)
             printf("%d ",arr[i][j]);
            else
             printf("  ");
        }
        printf("\n");
    }
    
}