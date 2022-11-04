#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c,choice;

    while(1)
    {
       printf("\n#########################################");
       printf("\n\nEnter your choice\n");
       printf("1. To check Isoscale Triangle\n");
       printf("2. To check Right Triangle\n");
       printf("3. To check Equilateral Triangle\n");
       scanf("%d",&choice);

       printf("Enter three numbers\n");
       scanf("%d%d%d",&a,&b,&c);
    
       switch(choice)
       {
           case 1: if(a==b||b==a||a==c)
                    printf("Isoscale Triangle");
                  else
                    printf("Not Isoscale Triangle");
                   break;
           case 2: if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
                    printf("Right Triangle");
                   else 
                    printf("Not Right Triangle");
                   break;
           case 3: if((a==b)&(b==c))
                    printf("Equilateral Triangle");
                   else
                    printf("Not Equilateral Triangle");
                   break;
           case 4: break;

           default: printf("Invalid number"); 
                    break;
                               
       }
       if(choice==4)
        break;
    
       }
       return 0;
}