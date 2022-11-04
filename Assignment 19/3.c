#include<stdio.h>
#include<string.h>
int main()
{
  char str[5][20];
  int i;
  printf("Enter 5 strings\n");
  for(i=0; i<5; i++)
    gets(str[i]);
  printf("Your strings are\n");
  for(i=0; i<5; i++)
    puts(str[i]);
}