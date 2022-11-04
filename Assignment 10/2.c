#include<stdio.h>
#include<conio.h>
int simpleint(int,int,int);
int main()
{
    int p, r, t;
    printf("Enter principal amount, rate of interest and time duration\n");
    scanf("%d%d%d",&p,&r,&t);
    printf("Simple interest is %d",simpleint(p,r,t));
    return 0;
}
int simpleint(int p, int r, int t)
{
    int si;
    si =(p * r * t)/100;
    return si;
}