//Write a c program to print string upper using string handling functions
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("Enter string: ");
    gets(str);
    printf("String is: %s", str);
    printf("\nUpper string is: %s", strupr(str));
    return 0;
}