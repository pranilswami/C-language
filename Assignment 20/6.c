#include<stdio.h>

int main()
{
    char str[100],*p;
    int i;
    printf("Enter a string\n");
    gets(str);
    p=&str[0];
    for(i=0; p[i]; i++);
    printf("%d",i);

    
}