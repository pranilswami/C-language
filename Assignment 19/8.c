#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
  char str[5][20]={"the","quick","brown","fox","quick"};
  printf("Enter two strings between the given sentence to find the minimum distance between them\n");
  char word1[10],word2[10];
  printf("\nEnter first string : ");
  gets(word1);
  printf("Enter second string : ");
  gets(word2);
  int i=0,j=0,sum=0;
  int n=0;
  int num1=0,num2=0,flag=0;
  while(i<=5) 
  {
        if(flag!=1)
        {n++;
        n=strcmp(str[i],word1);
        if(n==0)
        {
            num1=i+1;
            flag=1;
        }}
        else
        {n++;
        n=strcmp(str[i],word2);
        if (n==0)
        {
            num2=i+1;
            break;
        }}
        i++;
    }
    printf("%d",num2-num1);
  
}