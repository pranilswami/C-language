#include<stdio.h>
#include<conio.h>

int main()
{
    int i,n;
    for(i=0,n=19;i<10;n--)
    {
        if(n%2)
        {
            printf("%d\n",n);
            i++;
        }
    }
    return 0;
}