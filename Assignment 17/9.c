#include<stdio.h>

int main()
{
    char str[100];
    int i,j,temp=0,min=0;
    printf("enter a string\n");
    gets(str);
    for(i=0; str[i]; i++)
    {
        for(j=i+1; str[j]; j++)
        {
            if(str[j]<str[i])
            {
                temp=str[j];
                str[j]=str[i];
                str[i]=temp;
            }
        }
    }
    for(i=0; str[i]; i++)
    printf("%c",str[i]);
    
}