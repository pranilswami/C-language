#include<stdio.h>
#include<string.h>
void swap(char *p,char *q,int size);
int main()
{
   char arr1[20],arr2[20];
   printf("Enter first string\n");
   gets(arr1);
   printf("Enter second string\n");
   gets(arr2);
   int a=strlen(arr1);
   int b=strlen(arr2);
   int size;
   size=a>b?a:b;
   swap(&arr1,&arr2,size);
   printf("Array 1: %s\nArray 2: %s",arr1,arr2);
   return 0;
}
void swap(char *p,char *q,int size)
{
    int i;
    char temp;
    for(i=0; i<size; i++)
    {
        temp=*(p+i);
        *(p+i)=*(q+i);
        *(q+i)=temp;
    }
}