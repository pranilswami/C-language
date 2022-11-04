#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,arr1[3][3],arr2[3][3];
    printf("Enter 9 numbers of array\n");
    for(i=0; i<3; i++)
      for(j=0; j<3; j++)
        scanf("%d",&arr1[i][j]);
    printf("Transpose of given matrix is \n");
        
    for(j=0; j<3; j++)
    { 
        {
           for(i=0; i<3; i++)
           printf("%d ",arr1[i][j]);
        }
        printf("\n");
        
    }
}