#include<stdio.h>

int main()
{
    char str[100];
    int i,vowel=0;
    printf("Enter a string\n");
    gets(str);
    for(i=0; str[i]; i++)
    {
        if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
        vowel++;
    }
    printf("%d number of vowels",vowel);
}