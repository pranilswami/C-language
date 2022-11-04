#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
  char str[2][20]={"pranilswami","pranil987.@,0",};
  int i=0,n=0;
  char username[20],password[20];
  printf("Enter your username\n");
  gets(username);
  n=strcmp(str[0],username);
  if(n==0)
  n=1;
  else
  printf("\nInavalid username");
  switch (n)
  {
  case 1:
        n=0;
      printf("\nEnter your password");
      gets(password);
      n=strcmp(str[1],password);
      if(n==0)
      n=1;
      switch (n)
      {
      case 1:
          printf("\nYou are logged in");
          break;
      
      default:
          break;
      }
      break;
  
  default:
     printf("\nInvalid password");
      break;
  }
}