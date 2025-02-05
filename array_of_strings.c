//Write a c program to initialize an array of strings
#include<stdio.h>
int main()
{
    char names[3][50]={"Varshitha","Jahnavi","Blessy"};
    int i;
    printf("\nElements of string array are");
    for(i=0; i<3; i++)
    printf("\n%s", names[i]);
    return 0;
}