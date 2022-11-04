#include<stdio.h>
#include<string.h>
void word(char str[]);
int main()
{
    char str[100];
   
    printf("Enter a sring\n");
    fgets(str,20,stdin);
    word(str);
}
void word(char str[])
{
    int i,j,count=0;
    for(i=0; str[i]; i++)
    {
        if(str[i]==32)
        count++;
    }
    printf("Total words : %d",count+1);
}