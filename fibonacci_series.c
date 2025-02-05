#include<stdio.h>
void main()
{
    int a,b,c,n,i;
    printf("Enter the value");
    scanf("%d",&n);
    a=0;
    b=1;
    printf("Fibonacci Series:");
    for(i=1;i<=n;i++)
    {
        printf("%4d",a);
        c=a+b;
        a=b;
        b=c;
    }
}