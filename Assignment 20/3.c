#include<stdio.h>
void sort(int *);
int main()
{
    int arr[5],i;
    printf("Enter 5 number\n");
    for(i=0; i<5; i++)
    scanf("%d",&arr[i]);
    sort(&arr[0]);
    for(i=0; i<5; i++)
    printf("%d ",arr[i]);
}
void sort(int *p)
{
    int i,j,q,min;
    for(i=0; i<5; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(*(p+j)<*(p+i))
            {
                q=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=q;
            }
        }
    }
}
