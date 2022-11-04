#include<stdio.h>
#include<conio.h>

int main()
{
    float cp,sp,p,l; //cp = cost price, sp = selling price, p=profit percentage, l=loss percentage 
    printf("Enter cost price and selling price\n");
    scanf("%f %f",&cp,&sp);

    if(cp<sp)
    {   
        p=(sp-cp)/cp*100;    // profit percentage
        printf("profit percentage is %.2f",p);
    }

    else if(cp>sp)
    { 
        l=(cp-sp)/cp*100;    // loss percentage
        printf("loss percentage is %.2f",l);
     }

    else
     printf("no profit no loss");

    return 0;
}