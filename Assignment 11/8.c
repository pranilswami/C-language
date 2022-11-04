#include<stdio.h>
#include<conio.h>
int fact(int );
int combi(int,int );
void pascal(int);

int fact(int n)
{
    int i,f=1;
    for(i=n; i>=1; i--)
    f=f*i;
    return f;
}
int combi(int n, int r)
{
    return (fact(n)/(fact(n-r)*fact(r)));
}
void pascal(int line)
{
   int i,j,k,r,n;
   for(i=1,n=0; i<=line; i++,n++)
   {
       k=1;
       r=0;
       for(j=1; j<=line*2-1; j++)
       {
           
           if(j>=line+1-i && j<=line-1+i && k)
           {
               printf("%2d",combi(n,r));
               k=0;
               r++;
           }
           else
           { printf("  ");
            k=1;}
       }
       printf("\n");
   }
   return 0;
}

int main()
{
    int line;
    printf("Enter number of rows\n");
    scanf("%d",&line);
    pascal(line);
    return 0;

}