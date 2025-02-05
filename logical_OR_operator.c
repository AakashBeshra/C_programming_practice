#include<stdio.h>
void main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b||a>c) printf("a is greatest, ");
    else printf("a is smallest, ");
    if(b>a||b>c) printf("b is greatest, ");
    else printf("b is smallest, ");
    if(c>a||c>b) printf("c is greatest, ");
    else printf("c is smallest, ");
}