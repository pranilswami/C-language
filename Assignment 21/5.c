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
void sort(struct employee *e1)
{
    struct employee temp;
    int size=4,i=0,j=0;
    for(i=0; i<4; i++)
    {
        for(j=0; j<size; j++)
        {
            if(e1[j].salary > e1[j+1].salary)
            {
                temp=e1[j];
                e1[j]=e1[j+1];
                e1[j+1]=temp;
            }
        }
        size--;
    }
}
void display(struct employee e2)
{
    printf("%d\n%s\n%f\n",e2.id,e2.name,e2.salary);
}
int main()
{
    struct employee e1[5],temp,*ptr;
    int i=0,j=0;
    for(i=0; i<5; i++)
    e1[i]=input();
    sort(e1);
    printf("Sorted array : \n");
    for(i=0; i<5; i++)
    display(e1[i]);
    return 0;  
}