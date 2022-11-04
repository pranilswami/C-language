#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char str[200],res[50]="",word[50];
    int i=0,j=0,k=0;
    printf("Enter a sentence\n");
    gets(str);
    strcat(str," ");
    for(i=0; str[i]; i++)
    {
        if(str[i]==' ')
        {
            word[j]='\0';
            strrev(word);
            strcat(res,word);
            strcat(res," ");
            j=0;
        }
        else
        {
            word[j]=str[i];
            j++;
        }
    }
    printf("%s",strrev(res));
    
}