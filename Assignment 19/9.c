#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
  char str[5][20]={"pranil","vinayak","akhilesh","juber","himanshu"};
  char name[10];
  printf("Enter your name\n");
  gets(name);
  int i=0,n=0,fact=1;
  for(i=0; i<5; i++)
  {
    int n=strcmp(str[i],name);
    if(n==0)
    {
        printf("enter a number to find factorial\n");
        scanf("%d",&n);
        while(n>0)
        {
            fact = fact*n;
            n--;
        }
        printf("%d",fact);
        break;
    }
    
  }
  if (i==5)
  printf("Invalid");
  
}