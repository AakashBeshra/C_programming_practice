#include<stdio.h>
int main()
{
    int num;
    int binary[8]={0,0,0,0,0,0,0,0};
    int i=0,j;
    printf("Enter a positive number between 0 and 255:");
    scanf("%d",&num);
    while(num>0)
    {
        binary[i]=num%2;
        num=num/2;
        i++;
    }
    printf("Binary equivalent:");
    for(j=7;j>=0;j--)
    {
        printf("%d",binary[j]);
    }
    return 0;
}