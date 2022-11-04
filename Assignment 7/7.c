#include<stdio.h>
#include<conio.h>

int main()
{
    int n1,n2,n,i;
    printf("Enter a number\n");
    scanf("%d%d",&n1,&n2);
    for(n=n1; n<=n2; n++)
    {
        for(i=2; i<n; i++)
        {
            if(n%i==0)
            break;
        }
        if(i==n)
        printf("%d ",n);
    }
}