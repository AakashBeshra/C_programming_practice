//Write an example program for pointers to integers and array to integers
#include<stdio.h>
int main()
{
    int *p1;
    int (*p2)[5];
    int a[5];
    p1 = a;
    p2 = &a;
    printf("p1 > %p, p2 = %p\n", p1, p2);
    p1++;
    p2++;
    printf("p1 = %p1, p2 = %p\n", p1, p2);
    return 0;
}