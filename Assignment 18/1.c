#include<stdio.h>
#include<string.h>
int length(char str[]);
int main()
{
    char str[100];
    int i,l;
    printf("Enter a string\n");
    fgets(str,20,stdin);
    
    printf("%d",length(str)-1);

}
int length(char str[])
{
    int i;
    for(i=0; str[i]; i++);
    return i;

}