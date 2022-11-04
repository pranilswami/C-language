#include<stdio.h>

int main()
{
    char str[100];
    int i,l,temp=0;
    printf("Enter a string\n");
    gets(str);
    for(l=0; str[l]; l++);
    for(i=0; i<l/2; i++)
    {
        temp=str[i];
        str[i]=str[l-i-1];
        str[l-i-1]=temp;
    }
    for(i=0; str[i]; i++)
     printf("%c",str[i]);
}