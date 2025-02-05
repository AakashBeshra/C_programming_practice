/*Write a c program to check whether the number is even or odd*/
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the value of n=");
    scanf("%d",&n);
    (n%2==0)?printf("Even\n"):printf("Odd\n");
}