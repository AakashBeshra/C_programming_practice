#include<stdio.h>
void main()
{
    int n;
    printf("Enter the value of n=");
    scanf("%d",&n);
    if(n>=75&&n<=100)
    {printf("Grade A\n");
    printf("You are promoted");
    }
    else if(n>=65&&n<75)
    {
        printf("Grade B\n");
        printf("You are promoted");
    }
    else if(n>=50&&n<65)
    {
        printf("Grade C\n");
        printf("You are promoted");
    }
    else if(n>=40&&n<50)
    {
        printf("Grade D\n");
        printf("You are promoted");
    }
    else
    {
        printf("FAIL");
    }
}