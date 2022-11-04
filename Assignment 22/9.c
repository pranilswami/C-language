#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p,n=0;
    printf("Enter the no.of value do you want to enter\n");
    scanf("%d",&n);
    p=(int *)malloc(4);
    *p=5;
    if(*p==NULL)
    p=(int *)realloc(p,5);
}