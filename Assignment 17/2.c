#include<stdio.h>

int main()
{
    char str[100],c; int i,count=0;
    printf("Enter a string\n");
    gets(str);
    printf("Enter a character\n");
    scanf("%c",&c);
    for(i=0; str[i]; i++)
    {
        if(str[i]==c)
        count++;
    }
    printf("%c is %d times",c,count);
    return 0;
}