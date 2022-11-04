#include<stdio.h>
int main()
{
    char a[10]="Manakapur";
    int freq[150]={0};
    int i=0;
    while(a[i] != '\0')
    {
        freq[a[i]]++;
        i++;
    } 
    for(i=0; i!=150; i++)
    {
        if(freq[i] != 0)
        printf("%c ==> %d\n",i,freq[i]);
    }
}