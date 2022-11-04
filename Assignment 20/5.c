#include<stdio.h>

int main()
{
    int i,j,*p,*q;
    printf("Enter two number\n");
    scanf("%d%d",&i,&j);
    p=&i;
    q=&j;
    *p>*q?printf("%d",*p):printf("%d",*q);

}