#include<stdio.h>
#include<conio.h>
int naturalno(int n);
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    naturalno(n);

}
int naturalno(int n)
{
    int i;
    for(i=1; i<=n; i++)
    printf("%d ",i);  
}