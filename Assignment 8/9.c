#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,k;
    for(i=1; i<=4; i++)
    {
        k=1;
        for(j=1; j<=7; j++)
        {
            if(j>=i&&j<=8-i)
            {
                if(j<4)
                {
                    printf("%d",k);
                    k++;
                }
                else
                {
                    printf("%d",k);
                    k--;
                }
            }
            else
             printf(" ");
        }
        printf("\n");
    }
}