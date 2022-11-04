#include<stdio.h>
#include<string.h>
void alp(char str[]);
int main()
{
    char str[100];
    printf("Enter a string\n");
    fgets(str,20,stdin);
    alp(str);

}
void alp(char str[])
{
    int i,count1=0,count2=0;
    for(i=0; str[i]; i++)
    {
        if('a'<=str[i]&&str[i]<='z'||'A'<=str[i]&&str[i]<='Z')
        count1++;
        if('0'<=str[i]&&str[i]<='9')
        count2++;
    }
    if(count1>0 && count2>0)
    printf("Alphanumeric string");
    else
    printf("Not Alphanumeric string");
}
