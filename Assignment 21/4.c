#include<stdio.h>
#include<string.h>
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
    e2.name[strlen(e2.name)-1]='\0';
    scanf("%f",&e2.salary);
    return e2;
}
void display(struct employee e2)
{
    printf("%d\n%s\n%f\n",e2.id,e2.name,e2.salary);
}
int main()
{
    struct employee e1[5];
    int i=0;
    float max=0;
    for(i=0; i<5; i++)
    e1[i]=input();
    for(i=0; i<5; i++)
    display(e1[i]);
    max=e1[0].salary;
    for(i=0; i<5; i++)
    {
        
        if(e1[i].salary > max)
        max=e1[i].salary;
    }
    printf("highest salay\nid:%d\nname:%s\nsalary:%f",e1[i-1].id,e1[i-1].name,max);
    return 0;  
}