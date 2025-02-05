//Write an example program for initializing structure and printing it
#include<stdio.h>
struct student
{
    int rno;
    char name[20];
    int tm;
    float avg;
};
void main()
{
    struct student s1={28, "SUN", 450, 89};
    printf("\nRoll Number: %d", s1.rno);
    printf("\nName: %s", s1.name);
    printf("\nTotal: %d", s1.tm);
    printf("\nAverage: %f", s1.avg);
}