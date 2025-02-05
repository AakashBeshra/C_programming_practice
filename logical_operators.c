#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("Enter the values of a,b,c,d\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    printf("%d\n",(a>b)&&(c>d));
    printf("%d\n",(a<b)||(c>d));
    printf("%d\n",a!=0);
}