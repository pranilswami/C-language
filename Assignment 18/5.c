#include<stdio.h>
#include<string.h>
void lower(char str[]);
int main()
{
    char str[100];
    printf("Enter a string\n");
    fgets(str,20,stdin);
    lower(str);
    return 0;
}
void lower(char str[])
{
    printf("%s",strlwr(str));
}