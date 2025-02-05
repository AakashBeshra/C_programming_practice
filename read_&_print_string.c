//Write a program to read a string and print it
#include<stdio.h>
void main()
{
    char ch, city[20];
    int i=0;
    printf("Enter a city name ");
    do
    {
        ch=getchar();
        city[i]=ch;
        i++;
    } while (ch!='\n');
    i=i-1;
    city[i]='\0';
    printf("The city is:");
    puts(city);
}