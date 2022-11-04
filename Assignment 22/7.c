#include<stdio.h>
#include<stdlib.h>
void input()
{
    int *ptr; //here pointer ptr is created
    ptr=(int *)malloc(sizeof(int )); //4 byte of memory will allocate at runtime
    *ptr=5; //here including value 5 in dma variable but not returning in main function so memory leak happen 
}//here lifetime of ptr is ended with end of input funtion
int main()
{
    int *ptr;
    input(); //calling input funtion
    printf("%d",ptr);//we want to print value 5 store in dma variable but we didn't return the input function
    //so it will just print address of ptr in main funtion not in input function
}