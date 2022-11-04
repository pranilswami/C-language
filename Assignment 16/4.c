#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,sum=0,n;
    printf("Enter the order of matrix\n");
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter all the coefficient of matrix\n");
    for(i=0; i<n; i++)
     for(j=0; j<n; j++)
       scanf("%d",&arr[i][j]);
    for(i=0; i<n; i++)
     {
         for(j=0; j<n; j++)
        {
            if(i==j)
            {
                sum=sum+arr[i][j];
            }

        }
     }
     printf("Sum of right diagonal matrix is : %d",sum);
       
}