/*Write a c program for post-increment*/
#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the value of a=");
    scanf("%d",&a);
    a++;
    printf("The value of a++ is=%d\n",a);
    b=a++;
    printf("The value of a and b is=%d %d",a,b);
}