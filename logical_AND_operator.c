#include<stdio.h>
void main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("a is greatest, ");
    }
    if(b>a&&b>c)
    {
        printf("b is greatest, ");
    }
    if(c>a&&c>b)
    {
        printf("c is greatest, ");
    }
    if(a<b&&a<c)
    {
        printf("a is smallest, ");
    }
    if(b<a&&b<c)
    {
        printf("b is smallest, ");
    }
    if(c<a&&c<b)
    {
        printf("c is smallest, ");
    }
    else printf("a b c are equal");
}