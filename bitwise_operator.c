#include<stdio.h>
void main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>>b) {printf("%d is very very greater than ",a);printf("%d",b);}
    else if(a<<b) {printf("%d is very very lesser than ",a);printf("%d",b);}
    else if(a|b>>c) {printf("Either of the first two numbers is very very bigger than the third number");}
}