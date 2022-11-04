#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
   int i;
   char ip[]="123.134.12.13";
   char *a=strtok(ip,".");   //it will tokenize it means seperate in a string by dot and the address of that string stored in pointer character
   int count=0;
   while(a != NULL)
   {
      int x=atoi(a); // it will convert ascii into integer
      if((x >=0 ) && (x<=255))
        printf("%d ",x);
      a = strtok(NULL,".");//here we are using same string ip forward from null
   }
   
   
}






























// int validate_number(char *str) {
//    while (*str) {
//       if(!isdigit(*str)){ //if the character is not a number, return
//          false;
//          return 0;
//       }
//       str++; //point to next character
//    }
//    return 1;
// }
// int validate_ip(char *ip) { //check whether the IP is valid or not
//    int i, num, dots = 0;
//    char *ptr;
//    if (ip == NULL)
//       return 0;
//       ptr = strtok(ip, "."); //cut the string using dor delimiter
//       if (ptr == NULL)
//          return 0;
//    while (ptr) {
//       if (!validate_number(ptr)) //check whether the sub string is
//          holding only number or not
//          return 0;
//          num = atoi(ptr); //convert substring to number
//          if (num >= 0 && num <= 255) {
//             ptr = strtok(NULL, "."); //cut the next part of the string
//             if (ptr != NULL)
//                dots++; //increase the dot count
//          } else
//             return 0;
//     }
//     if (dots != 3) //if the number of dots are not 3, return false
//        return 0;
//       return 1;
// }
// int main() {
//    char ip1[] = "192.168.4.1";
//    char ip2[] = "172.16.253.1";
//    char ip3[] = "192.800.100.1";
//    char ip4[] = "125.512.100.abc";
//    validate_ip(ip1)? printf("Valid"): printf("Not valid");
//    validate_ip(ip2)? printf("Valid"): printf("Not valid");
//    validate_ip(ip3)? printf("Valid"): printf("Not valid");
//    validate_ip(ip4)? printf("Valid"): printf("Not valid");
// }