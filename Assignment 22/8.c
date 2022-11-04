#include<stdio.h>
#include<stdlib.h>
void * input()
{
    int *ptr;
    ptr=(int *)malloc(4);
    free(ptr);
    *ptr=10;  //here we want to add value into dma variable but this is dangling variable.It has free already
}
int main()
{
    input();
}