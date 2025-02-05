//Write a c program for string contatination
#include<stdio.h>
#include<string.h>
int main()
{
    char ch[10]={"hello "};
    char ch2[10]={"world"};
    strcat(ch, ch2);
    printf("Value of first string is: %s", ch);
    return 0;
}