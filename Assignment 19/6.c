#include<stdio.h>
#include<string.h>
int main()
{
  char str[5][20];
  int i,j,l,k;
  printf("Enter 5 string\n");
  for(i=0; i<5; i++)
  gets(str[i]);
  for(i=0; i<5; i++)
  {
    l=strlen(str[i]);  //Here we get lenght of each string
     for(j=0,k=l-1; j<l&&k>=0; j++,k--) //Here we are tracing each character in forward and reverse order
    {
       if(str[i][j]!=str[i][k]) //if we found that the character isn't match then we jump out from the loop
        {
          break;
        }
    }
    if(k==-1&&j==l) // Here if all matches are done then we can say that given string is palindrom
    printf("%s is palindrome\n",str[i]);
  }
}
