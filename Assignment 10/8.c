#include<stdio.h>
#include<conio.h>
long perm(int n,int r);
long fact(int n);
int main()
{
    int n,r;
    printf("Enter two number\n");
    scanf("%d%d",&n,&r);
    printf("arrangements are %ld",perm(n,r));
}

long fact(int n)
{
    int i,f=1;
    for(i=n; i>=1; i--)
    f=f*i;
    return f;
}

long perm(int n, int r)
{
    return (fact(n)/fact(r));
}