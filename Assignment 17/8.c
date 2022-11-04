#include<stdio.h>

int main()
{
    char str1[100],str2[100];
    int i,l;
    printf("Enter a string str1 : ");
    gets(str1);
    for(l=0; str1[l]; l++);
    for(i=0; i<l; i++)
    {
        str2[i]=str1[i];
    }
    printf("String copied in str2\n");
    for(i=0; i<l; i++)
    printf("%c",str2[i]);
}