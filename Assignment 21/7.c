#include<stdio.h>
#include<string.h>

struct time
{
    int hrs;
    int min;
    int sec;
};
struct time input()
{
    struct time t;
    printf("\nEnter time like hrs:min:sec\n");
    scanf("%d:%d:%d",&t.hrs,&t.min,&t.sec);
    return t;
}
void difference(struct time t1,struct time t2,struct time *diff)
{
    printf("Difference between time is :\n");
    if(t2.sec>t1.sec)
    {
        t1.min-=1;
        t1.sec+=60;
    }
    diff->sec=t1.sec-t2.sec;
    if(t2.min>t1.min)
    {
        t1.hrs-=1;
        t1.min+=60;
    }
    diff->min=t1.min-t2.min;
    diff->hrs=t1.hrs-t2.hrs;
    printf("%d:%d:%d",diff->hrs,diff->min,diff->sec);
}
int main()
{
    struct time t1,t2;
    struct time diff;
    printf("Your start time always greater than end time");
    t1=input();
    t2=input();
    difference(t1,t2,&diff);

}