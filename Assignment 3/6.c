#include<stdio.h>
#include<conio.h>

int main()
{
    int n1,n2;
    printf("Enter two number\n");
    scanf("%d%d",&n1,&n2);
    if(n1!=n2)
    {
    if(n1>n2)
     printf("%d is Greater",n1);
    else
     printf("%d is Greater",n2);
    }
    else
    printf("%d is Greater",n1);
    return 0;
}