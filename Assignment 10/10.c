#include<stdio.h>
#include<conio.h>
void primefactor(int n);
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    primefactor(n);
    return 0;
}

void primefactor(int n)
{  int i;

    for(i=2; i<=n; i++)
    {
        while(n%i==0)
       {
          printf("%d ",i);
          n=n/i;
       }

    }
  
    
  
}