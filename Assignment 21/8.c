#include<stdio.h>
#include<string.h>
struct student input();
void display(struct student s);
struct student
{
    int Roll;
    char name[20];
    float marks;
};
struct student input()
{
    struct student s;
    printf("Enter Roll no., name and marks\n");
    scanf("%d",&s.Roll);
    fflush(stdin);
    fgets(s.name,20,stdin);
    s.name[strlen(s.name)-1]='\0';
    scanf("%f",&s.marks);
    return s;
}
void display(struct student s)
{
    printf("\n%d\t%s\t%.2f",s.Roll,s.name,s.marks);
    return;
}

int main()
{
    struct student s[10];
    int i;
    for(i=0; i<10; i++)
      s[i]=input();
    for(i=0; i<10; i++)
      display(s[i]);
    return 0;
}