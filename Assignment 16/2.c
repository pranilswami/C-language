#include<stdio.h>
#include<conio.h>

int main()
{
    int arr1[3][3], arr2[3][3], arr3[3][3];
    int i,j,k,sum;
    printf("Enter 9 numbers for first array\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
         scanf("%d",&arr1[i][j]);
    }
    printf("Enter 9 numbers for second array\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
         scanf("%d",&arr2[i][j]);
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            sum=0;
            for(k=0; k<3; k++)
            {
                sum=sum+arr1[i][k]*arr2[k][j];
                arr3[i][j]=sum;
            }
            printf("%d ",arr3[i][j]);
        }
    }
}