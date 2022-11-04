#include<stdio.h>
int main()
{
    char str[100],*p;
    int i,j;
    printf("Enter a string\n");
    gets(str);
    p=&str;
    for(i=0; p[i]; i++);
    for(j=i; j>=0; j--)
    printf("%c",p[j]);
}