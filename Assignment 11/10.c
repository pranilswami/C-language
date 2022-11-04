#include<stdio.h>
#include<conio.h>
int sum(int n);
int main()
{
    sum(6);
}
int sum(int n)
{
    int i,j,f,s=0;
    for(i=1; i<=n; i++)
    {
        f=1;
        for(j=i; j>=1; j--)
        {
            f=f*j;
        }
        s=s+(f/i);
    }
    printf("%d",s);

}