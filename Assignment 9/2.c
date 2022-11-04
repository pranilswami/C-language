#include<stdio.h>
#include<conio.h>


int main()
{
    int a,b,c,v;
  while(1)
  {
       printf("\na. Addition\n");
    printf("b. Subtraction\n");
    printf("c. Multiplication\n");
    printf("d. Division\n");
    printf("e. Exit\n");
    printf("Enter a character for performing above operation\n");
    scanf("%c",&v);
   
    printf("Enter two number\n");
    scanf("%d%d",&a,&b);
    
        switch(v)
    {
        case 97: printf("Addition is %d",a+b);
                break;
        case 98: printf("Subtration is %d",a-b);
                break;
        case 99: printf("Multiplication is %d",a*b);
                break;
        case 100: printf("Division is %d",a/b);
                break;
        default: printf("Exit.Invalid character. Enter between a to e");
    }
    if(v=='e')
      break;
      
  }
  
 
}