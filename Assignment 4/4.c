#include<stdio.h>
#include<conio.h>

int main()
{
    int i,n;
    for(i=0,n=1;i<10;n++)
    { if(n%2)
      {
        printf("%d\n",n); //first 10 odd natural number
        i++;
      }
    }
    return 0;
}