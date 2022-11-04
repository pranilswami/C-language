#include<stdio.h>
#include<string.h>
void upper(char str[]);
int main()
{
    char str[100];
    printf("Enter a string\n");
    fgets(str,20,stdin);
    upper(str);
    return 0;
}
void upper(char str[])
{
    printf("%s",strupr(str));
}