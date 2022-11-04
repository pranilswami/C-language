#include<stdio.h>

int main()
{
    char str[100];
    int i;
    printf("Enter a string\n");
    gets(str);
    for(i=0; str[i]; i++)
    {
        if('A'<=str[i]&&str[i]<='Z')
        printf("%c",str[i]);
        else
        printf("%c",str[i]-32);
    }
}