#include<stdio.h>

int main()
{
    char str[100],*p;
    int i,vowel=0;
    printf("Enter a string\n");
    gets(str);
    p=&str[0];
    for(i=0; p[i]; i++);
    printf("Size of string : %d\n",i);
    for(i=0; p[i]; i++)
    {
        if(p[i]=='a'||p[i]=='A'||p[i]=='e'||p[i]=='E'||p[i]=='i'||p[i]=='I'||p[i]=='o'||p[i]=='O'||p[i]=='u'||p[i]=='U')
        vowel++;
    }
    printf("No. of vowels : %d\n",vowel);
    printf("No. of consonant : %d",i-vowel);
}

