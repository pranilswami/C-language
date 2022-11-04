#include<stdio.h>
#include<string.h>
void palindrome(char str[]);
int main()
{
    char str[100];
    printf("Enter a string\n");
    fgets(str,20,stdin);
    palindrome(str);
    return 0;
}
void palindrome(char str[])
{
    int i,j,l,count=0;
    for(l=0; str[l]; l++);
    l--;
    for(i=0,j=l-1; i<=j; i++,j--)
    {
        if(str[i]!=str[j])
        break;
    }
    if(i>j)
    printf("Palindrome number");
    else
    printf("Not Palindrome number");
}