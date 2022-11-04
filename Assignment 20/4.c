#include<stdio.h>

int main()
{
    int a,*p,**q;
    printf("Enter a number\n");
    scanf("%d",&a);
    //Here entered value is stored in the variable a.
    p=&a;
    //and adress of variable a is stored in pointer variable p. 
    printf("Normal method to access value in variable : %d\n",a);
    //we can access the value in a by pointer variable.
    printf("Pointing method to access value in variable : %d\n",*p);
    //Here double pointer is used. Pointer always point 1 less level of itself.
    q=&p;
    printf("Duoble pointer is used : %d\n",**q);
}