#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][30];
    int i,l,j,flag;
    printf("Enter 5 email addresses\n");
    for(i=0; i<5; i++)
      gets(str[i]);
    printf("The Odd Email addresses are\n");
    for(i=0; i<5; i++)
    {
      flag=0;
        for(j=0; str[i][j]; j++)
        {
          if(str[i][j]=='@')
            {
              flag=1;
            }
        }
        if(flag!=1)
        {
          printf("%s\n",str[i]);
        }
    }
}