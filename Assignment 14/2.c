#include<stdio.h>
#include<conio.h>

int main()
{
    int num[10],i;
    float avg,sum=0; 
    printf("Enter 10 number\n");
    for(i=0; i<10; i++)
     {scanf("%d",&num[i]);}
    for(i=0; i<10; i++)
    { sum = sum + num[i];}
    avg = sum/10;
    printf("Average is %.2f",avg);
    return 0;
}