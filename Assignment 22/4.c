#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int n=0,i=0;
    printf("Enter no. text do you want of display\n");
    scanf("%d",&n);
    ptr=(char *)malloc(n*sizeof(char));
    printf("Enter text\n");
    scanf(" "); //clear input buffer
    gets(ptr);
    printf("%s",ptr);
    free(ptr);


}