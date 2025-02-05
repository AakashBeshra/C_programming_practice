/*Write a c program to find the biggest of two numbers*/
#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the value of a=");
    scanf("%d",&a);
    printf("Enter the value of b=");
    scanf("%d",&b);
    if (a>b) printf("a is bigger than b\n");
    if (a<b) printf("b is bigger than a\n");
    if (a==b) printf("a is equal to b");
    if (a!=b) printf("a is not equal to b");
}