#include<stdio.h>
#include<conio.h>
int main()
{
    int h,m;                                  // h means hours and m means minutes
    printf("Enter the time in HH:MM format\n");
    scanf("%d:%d",&h,&m);
    printf("\"%d:%d\" is converted into \"%d Hour and %d Minute\"",h,m,h,m);
    return 0;
}