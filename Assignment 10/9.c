#include<stdio.h>
#include<conio.h>
int founddigit(int n, int d);
int main()
{
    int i,n,a,d;
    printf("Enter a number and a digit to find\n");
    scanf("%d%d",&n,&d);
    printf("%d",founddigit(n,d));

}

int founddigit(int n,int d)
{
    int a,i;
    for(i=n; i>0; i--)
    {
      a=n%10;
      if(a==d)
     { printf("It contain given digit ");
      return d;}
      n=n/10;
      }
    if(i==0)
      {printf("It don't contain given digit");
      return d;}
}