#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,sum,num,x,one=0,greater=0;
    printf("Enter the order of matrix\n");
    scanf("%d",&num);
    int arr[num][num];
    printf("Enter all the coefficient of matrix\n");
    for(i=0; i<num; i++)
     for(j=0; j<num; j++)
      scanf("%d",&arr[i][j]);
    for(i=0; i<num; i++)
    {
        x=one;
        one=0;
        for(j=0; j<num; j++)
        {
            if(arr[i][j]==1)
             one++;

        }
        if(one>x)
         greater=i;
    }
    printf("index number %d row has most 1s",greater);

    
}