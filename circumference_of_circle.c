/*Write a c program for Circumference of Circle*/
#include<stdio.h>
#define PI 3.14
void main()
{
    float r;
    printf("Enter the value of r=");
    scanf("%f",&r);
    printf("The circumference of circle is=%f",2*PI*r);
}