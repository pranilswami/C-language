#include<stdio.h>
#include<conio.h>
void oddno(int n);
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    oddno(n);
    return 0;
}
void oddno(int n)
{
    int i;
    for(i=1; i<=n*2; i++)
    {
        if(i%2!=0)
        printf("%d ",i);

    }
    
}