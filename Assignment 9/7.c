#include<stdio.h>
#include<conio.h>

int main()
{
    float unit,amount,total;
    printf("Enter unit charge\n");
    scanf("%f",&unit);

    switch(unit<=50)
    {
        case 1: amount = unit*0.5;
                break;
        case 0: switch(unit<=150)
                {
                    case 1: amount = 25+(unit-50)*0.75;
                            break;
                    case 0: switch(unit<=250)
                            {
                                case 1: amount = 25+75+(unit-150)*1.20;
                                        break;
                                case 0: amount = 25+75+120+(unit-250)*1.50;
                                        break;
                            }
                            break;
                }
                break;

    }

    total = amount + amount * 20/100;
    printf("The Total Amount = %.2f",total);
}