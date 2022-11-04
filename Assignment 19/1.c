#include<stdio.h>
#include<string.h>

int main()
{
    char str[5][100];
    int i,vowel,j;
    for(i=0; i<5; i++)
    {
       printf("Enter %d string : \n",i+1);
       gets(str[i]);

    }
    
    for(i=0; i<5; i++)
    {
        vowel=0;
        for(j=0; j<20; j++)
        {
            if(str[i][j]=='a'||str[i][j]=='e'||str[i][j]=='i'||str[i][j]=='o'||str[i][j]=='o'||str[i][j]=='u'||str[i][j]=='A'||str[i][j]=='E'||str[i][j]=='I'||str[i][j]=='O'||str[i][j]=='U')
           {    
               vowel++;
           }
        }
       printf("In %d : %d vowels\n",i+1,vowel); 
    }
    
}