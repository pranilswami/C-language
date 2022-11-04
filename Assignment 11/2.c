#include<stdio.h>
#include<conio.h>
int hcf(int num1, int num2);
int main()
{
    int num1,num2;
    printf("Enter two number\n");
    scanf("%d%d",&num1,&num2);
    hcf(num1,num2);
    printf("HCF is %d",hcf(num1,num2));
    return 0;
}
int hcf(int num1, int num2)
{
    int i,j,ans=0;
    j=num1<num2?num1:num2;
    for(i=2; i<=j; i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            ans=i;
        }
    }
    return ans;
}