#include<stdio.h>

int main()
{
    char str[100];
    int i;
    printf("Enter a string\n");
    gets(str);
    for(i=0; str[i]; i++);
    printf("length is %d",i);
    return 0;
}
    

