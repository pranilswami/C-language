#include<stdio.h>
#include<conio.h>
long fact(int n);
long comb(int n, int r);
int main()
{
   int n,r,i;
   printf("Enter two number\n");
   scanf("%d%d",&n,&r);
   printf("number of combination is %ld",comb(n,r));
   return 0;
}

long fact(int n)
{
   int i,f=1;
   for(i=n; i>=1; i--)
   f=f*i;
   return f;

}

long comb(int n,int r)
{
   return (fact(n)/(fact(n-r)*fact(r)));
}


