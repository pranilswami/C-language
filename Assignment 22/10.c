#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n=0,*p,min=0,max=0,j;
    printf("Enter the no. of value to be entered\n");
    scanf("%d",&n);
    p=(int *)calloc(5,sizeof(int));
    printf("Enter value\n");
    for(i=0; i<n; i++)
    scanf("%d",&p[i]);
    min=p[0];
    max=p[0];
    for(i=0,j=i+1; i<n,j<n; i++,j++)
    {
       if(p[i]>max)
       max=p[i];
       if(p[i]<min)
       min=p[i];
    }
    printf("Min : %d\nMax : %d",min,max);
    free(p);
    return 0;
}