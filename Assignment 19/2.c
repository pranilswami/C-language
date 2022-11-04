#include<stdio.h>
#include<string.h>
int main()
{
    
    int i,pass,r;char str[10][20];
    char temp[20];
    
    printf("Enter Name of 10 city\n");
    for(i=0; i<10; i++)
      gets(str[i]);
    for(pass=1; pass<10; pass++)
    {
        for(i=0; i<10-pass; i++)
      {
        r=strcmp(str[i],str[i+1]);
        if(r>0)
        {
            strcpy(temp,str[i]);
            strcpy(str[i],str[i+1]);
            strcpy(str[i+1],temp);
            
       }
      }
    }
    printf("Sorted stings will be:\n");
    for(i=0; i<10; i++)
    puts(str[i]);
}