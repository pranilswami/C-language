#include<stdio.h>
#include<conio.h>
void repeat(char str[]);
int main()
{
    char str[100],check;
    int i,j;
    printf("Enter a string\n");
    fgets(str,20,stdin);
    repeat(str);

}
void repeat(char str[])
{
    int i,j;
    char check;
    for(i=0; str[i]; i++)
    {
        check=str[i];
        for(j=i+1; str[j]; j++)
        {
            if(str[i]==' ')
            break;
            if(str[j]==str[i])
            printf("Repeated character : %c\n",str[i]);
        }
    }
}