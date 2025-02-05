//Write a c program to read elements into the two dimensional array and display the element
#include<stdio.h>
void main()
{
    int i, j, a[10][10], r, c;
    printf("Enter the size of matrix A");
    scanf("%d%d", &r, &c);
    printf("Enter the elements in the matrix A\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Elements in matrix A are \n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ", a[i][j]);
        }
    }
}