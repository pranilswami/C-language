#include<stdio.h>
#include<conio.h>
unsigned int firstSetBitPos(int);
int main()
{
    int n;
    printf("Enter a number \n");
    scanf("%d",&n);
    printf("%u",firstSetBitPos(n));
    return 0;
    
}
unsigned int firstSetBitPos( int n)
{
    return log2(n&-n)+1;
}