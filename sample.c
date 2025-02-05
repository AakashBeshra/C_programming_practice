#include<stdio.h>
int linearSearch(int a[], int n, int val)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if(a[i] == val)
        return i + 1;
    }
    return -1;
}
int main()
{
    int i, val, a[]={12,14,16,18,20};
    printf("Enter the element to be searched: ");
    scanf("%d", &val);
    int n = sizeof (a) / sizeof (a[0]);
    int res = linearSearch(a,n,val);
    for(i = 0; i < n; i++);
    {
        printf("The element to be searched is %d\n", val);
    }
    if(res == -1)
    {
        printf("The element to be searched is not present");
    }
    else
    {
        printf("The element to be searched is at the postion %d", res);
    }
    return 0;
}