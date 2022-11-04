#include<stdio.h>
#include<conio.h>

int main()
{
    int num[10],i,s_even=0,s_odd=0;
    printf("Enter 10 number\n");
    for(i=0; i<10; i++)
     scanf("%d",&num[i]);
    for(i=0; i<10; i++)
    { 
        if(num[i]%2==0)
        s_even = s_even + num[i];
        else
        s_odd = s_odd + num[i];
     }
     printf("Sum of even no. is %d\n",s_even);
     printf("Sum of odd no. is %d",s_odd);
     return 0;
}