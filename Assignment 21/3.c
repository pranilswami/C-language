#include<stdio.h>
struct employee
{
    int id;
    char name[20];
    float salary;
};
struct employee input()
{
    struct employee e2;
    printf("Enter id, name and salary\n");
    scanf("%d",&e2.id);
    fflush(stdin);
    fgets(e2.name,20,stdin);
    scanf("%f",&e2.salary);
    return e2;
}
void display(struct employee e2)
{
    printf("%d %s %f",e2.id,e2.name,e2.salary);
}
int main()
{
    struct employee e1={12,"pranil",123.1};
    e1=input();
    display(e1);
    return 0;  
}