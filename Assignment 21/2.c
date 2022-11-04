#include<stdio.h>
struct employee
{
    int id;
    char name[20];
    float salary;
};
void input()
{
    struct employee e2;
    printf("Enter id, name and salary of emlpoyee\n");
    scanf("%d",&e2.id);
    fflush(stdin);
    fgets(e2.name,20,stdin);
    scanf("%f",&e2.salary);

}

int main()
{
    input();
    return 0;
}