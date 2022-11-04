#include<stdio.h>

int main()
{
    char str[100];
    int i,alphabet=0,digit=0,special=0;
    printf("Enter a string\n");
    gets(str);
    for(i=0; str[i]; i++)
    {
        if('a'<=str[i]&&str[i]<='z'||'A'<=str[i]&&'Z'<=str[i])
        alphabet++;
        else if('0'<=str[i]&&str[i]<='9')
        digit++;
        else
         special++;

    }
    printf("Number of alphabet %d\n",alphabet);
    printf("Number of digit %d\n",digit);
    printf("Number of special Character %d\n",special);


}