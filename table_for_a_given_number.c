#include<stdio.h>
void main()
{
    int i,num,pro;
    printf("Enter the value of n=");
    scanf("%d",&num);
    for(i=1;i<=20;i++)
    {
        pro=num*i;
        printf("%d x %d = %d\n",num,i,pro);
    }
}