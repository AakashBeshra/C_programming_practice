//Write a C program for string length function
#include<stdio.h>
#include<string.h>
int main()
{
    char ch[20]={'S','T','R','I','N','G','S','\0'};
    char c[25]={"String handling"};
    printf("length of string is: %d\n", strlen(ch));
    printf("length of string is: %d", strlen(c));
    return 0;
}