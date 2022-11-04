#include<stdio.h>
struct book
{
    int booid;
    char title[20];
    float price;
};
int main()
{
    struct book b1;
    b1.booid=10;
    strcpy(b1.title,"C language");
    b1.price=101.2f;
    printf("%d %s %f",b1.booid,b1.title,b1.price);
}