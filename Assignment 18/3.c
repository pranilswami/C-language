#include<stdio.h>
#include<string.h>
void compare(char str1[],char str2[]);
int main()
{
    char str1[100],str2[100];
    printf("Enter the string\n");
    fgets(str1,20,stdin);
    fgets(str2,20,stdin);
    compare(str1,str2);
    return 0;
}
void compare(char str1[],char str2[])
{
    int n;
    n=strcmp(str1,str2);
    if(n>0)
     printf("Second string is greater than first");
    else if(n<0)
     printf("first string is greater than second");
    else
     printf("Both are equal");
}