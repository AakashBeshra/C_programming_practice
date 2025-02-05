//Write a c program to print string lower using string handling functions
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("Enter string: ");
    gets(str);
    printf("String is: %s", str);
    printf("\nLower string is: %s", strlwr(str));
    return 0;
}