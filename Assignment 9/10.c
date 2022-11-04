#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    double root1, root2, a,b,c,i,d,r;
    printf("Enter coefficiant of quadratic equation\n");
    scanf("%lf %lf %lf",&a, &b, &c);
    d = b*b-4*a*c;
    r=4*a*c-b*b;
    
    switch(d>0)
    {
        case 1: root1 = (-b + sqrt(d)) / (2*a);
                root2 = (-b - sqrt(d)) / (2*a);
                printf("Real and distinct root1 = %.2lf root2 = %.2lf",root1,root2);
                break;
        case 0: switch(d<0)
                {
                    case 1: root1 = -b / (2*a);
                            root2 = sqrt(r) / (2*a);
                            printf("Complex and imaginary root1 = %.2lf + %.2lfi and root2 = %.2lf - %.2lfi",root1,root2,root1,root2);
                            break;
                    case 0: root1 = root2 = -b/2*a;
                            printf("Real and equal root1 = root2 = %.2lf",root1);
                            break;
                              
                }
                break;
                
    }
}