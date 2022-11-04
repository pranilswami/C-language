#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void input()
{
    char *ptr;
    int  n;
    printf("Enter leght of string\n");
    scanf("%d",&n);
    ptr=(char *)malloc(n*sizeof(char));
    printf("Enter string\n");
    scanf(" ");
    gets(ptr);
    puts(ptr);
    free(ptr);
}
int main()
{
    input();
}