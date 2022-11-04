#include<stdio.h>
#include<string.h>
void reverse(char str[]);
int main()
{
    char str[100];
    int l;
    printf("Enter a string\n");
    fgets(str,20,stdin);
    for(l=0; str[l]; l++);
    reverse(str);
    return 0;
}
void reverse(char str[])
{
    printf("%s",strrev(str));

}