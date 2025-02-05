//Write a c program for copying of strings
#include<stdio.h>
#include<string.h>
int main()
{
    char ch[28]={"String handling functions"};
    char ch2[28];
    strcpy(ch2, ch);
    printf("Value of second string is: %s", ch2);
    return 0;
}