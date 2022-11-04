#include<stdio.h>
#include<conio.h>
int lcm(int num1, int num2);
int main()
{
    int num1,num2;
    printf("Enter two number\n");
    scanf("%d%d",&num1,&num2);
    printf("LCM is %d",lcm(num1,num2));
}
int lcm(int num1, int num2)
{
    int i;
    for(i=2; i<=num1*num2; i++)
    {
        if(i%num1==0 && i%num2==0)
        {
            break;
        }
    }
    return i;

}