/*Write a c program for bigger of two numbers*/
#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the value of a=");
    scanf("%d",&a);
    printf("Enter the value of b=");
    scanf("%d",&b);
    (a>b)?printf("a is bigger"):printf("b is bigger");
}