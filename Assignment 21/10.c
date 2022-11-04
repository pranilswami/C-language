#include<stdio.h>
#include<string.h>

struct marks
{
   int roll;
   char name[20];
   float chem_marks;
   float math_marks;
   float phy_marks;
};
struct marks input()
{
    struct marks m;
    printf("Enter Roll no.,name, marks of chemistry, maths and physics\n");
    scanf("%d",&m.roll);
    fflush(stdin);
    fgets(m.name,20,stdin);
    m.name[strlen(m.name)-1]='\0';
    scanf("%f%f%f",&m.chem_marks,&m.math_marks,&m.phy_marks);
    return m;
}
void display(struct marks m)
{
    float percentage;
    percentage=((m.chem_marks+m.math_marks+m.phy_marks)/300)*100;
    
    printf("\n%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f",m.roll,m.name,m.chem_marks,m.math_marks,m.phy_marks,percentage);
}
int main()
{
    struct marks m[5];
    int i;
    for(i=0; i<5; i++)
    m[i]=input();
    for(i=0; i<5; i++)
    display(m[i]);

}