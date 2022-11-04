#include<stdio.h>
#include<conio.h>

int main()
{
    int arr1[3][3], arr2[3][3], arr3[3][3];
    int i,j;
    printf("Enter 9 numbers for fitst array\n");
    for(i=0; i<3; i++)
    {    for(j=0; j<3; j++)
          scanf("%d",&arr1[i][j]);}

    printf("\nEnter 9 numbers for second array\n");
    for(i=0; i<3; i++)
    {    for(j=0; j<3; j++)
          scanf("%d",&arr2[i][j]);}
    printf("The sum of two array is : \n");
    for(i=0; i<3; i++)
      {  for(j=0; j<3; j++)
          {
              arr3[i][j]=arr1[i][j]+arr2[i][j];
              printf("%d ",arr3[i][j]);
              
          }
        }
    
}