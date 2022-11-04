#include<stdio.h>
#include<conio.h>
int print(int num);
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    print(num);
    printf("%d",print(num));
}
int print(int num)
{
    if(num==0)
     return 0;
    else
     return ((num%2)+10*print(num/2));
    

}