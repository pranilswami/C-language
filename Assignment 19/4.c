#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][20],temp[20];
    int i,l;
    printf("Enter 5 strings\n");
    for(i=0; i<5; i++)
      gets(str[i]);
    printf("Enter a string to search\n");
      gets(temp);
    for(i=0; i<5; i++)
    {
        l=strcmp(str[i],temp);
        if(l==0)
        {
            printf("Yes it is present in the list");
            break;
        }
    }
    
}