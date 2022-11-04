#include<stdio.h>
#include<conio.h>

int main()
{
     int i,j,sum,num1,num2,zero=0,nonzero=0;
    printf("Enter the order of matrix\n");
    scanf("%d%d",&num1,&num2);
    int arr[num1][num2];
    printf("Enter all the coefficient of matrix\n");
    for(i=0; i<num1; i++)
     for(j=0; j<num2; j++)
      scanf("%d",&arr[i][j]);
    for(i=0; i<num1; i++)
     for(j=0; j<num2; j++)
      {
          if(arr[i][j]==0)
           zero++;
          else
           nonzero++;
      }
    if(zero>nonzero)
     printf("Sparse matrix");
    else
     printf("Not Sparse Matrix");
}