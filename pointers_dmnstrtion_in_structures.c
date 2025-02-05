//Write a C program to demonstrate about pointers in structures
#include<stdio.h>
struct sample
{
    int a;
    int b;
    int t;
    float avg;
};
int main() 
{
    struct sample s, t, *p;
    p = &s; //p is a pointer to store address of the structure sample
    p -> a = 20;
    p -> b = 35;
    p -> t = p -> a + p -> b;
    p -> avg = (float)(p -> t)/2;
    printf("Without Pointer\n");
    printf("Total = %d", s, t);
    printf("\nAverage = %f", s.avg);
    printf("\nWith Pointer\n");
    printf("Total = %d", p -> t);
    printf("\nAverage = %f", p -> avg);
    return 0;
}