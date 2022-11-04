#include<stdio.h>
#include<string.h>
struct employee input() ;
void display(struct employee e);
struct employee
{
    int id;
    char name[20];
    float salary;
};
struct employee input() // here 'e' is a variable which contain address passed from the main function 
{
    int i;
    struct employee e;
    printf("Enter a id, name and salary of emlpoyee\n");
    scanf("%d",&e.id);
    fflush(stdin);
    fgets(e.name,20,stdin);
    e.name[strlen(e.name)-1]='\0';
    scanf("%f",&e.salary);
    return e;    // here we are returning structure 'e' of type employee

}
void display(struct employee e)
{
    printf("%d\t%s\t%f\n",e.id,e.name,e.salary);
}
int main()
{
    struct employee e[5];
    struct employee temp;
    int i,num=0,j=0,size=0;
    // size=strlen(e);
    for(i=0; i<5; i++)
      e[i]=input(); // here we are passing the address of first block of array 'e'
    
    for(i=4; i>0; i--)
        for(j=0; j<4; j++)
        {
            num=strcmp(e[j].name,e[j+1].name);
            if(num>0)
            {
                temp=e[j];
                e[j]=e[j+1];
                e[j+1]=temp;   
            }
        }
    printf("Sorted array by alphabatical order\n");
    for(i=0; i<5; i++)
    display(e[i]);    

}