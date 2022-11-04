#include<stdio.h>
#include<conio.h>
void prime(int num);
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    prime(num);
    
}
void prime(int num)
{
    int i,j;
    for(j=2; j<=num; j++)
    {
        for(i=j-1; i>1; i--)
        {
            if(j%i==0)
             break;
        }
        if(i==1)
         printf("%d\n",j);
    }

}