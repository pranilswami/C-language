#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,sum,row,column;
    printf("Enter the order of matrix\n");
    scanf("%d%d",&row,&column);
    int arr[row][column];
    printf("Enter all the coefficient of matrix\n");
    for(i=0; i<row; i++)
     for(j=0; j<column; j++)
      scanf("%d",&arr[i][j]);
    for(i=0; i<row; i++)
    {
        sum=0;
        for(j=0; j<column; j++)
        {
            sum=sum+arr[i][j];

        }
        printf("Sum of elements of row %d : %d\n",i,sum);
    }
    for(j=0; j<column; j++)
    {
        sum=0;
        for(i=0; i<row; i++)
        {
            sum=sum+arr[i][j];
        }
        printf("Sum of elements of column %d : %d\n",j,sum);
    }
}