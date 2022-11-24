// C program to search an element using Sequential search technique

#include<stdio.h>
void main()
{
    int a[100],n,i,item;
    printf("Enter the Number of elements\n");
    scanf("%d",&n);
    printf("Enter the data\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to search\n");
    scanf("%d",&item);
    for ( i = 0; i < n; i++)
    {
        if(a[i]==item)
        {
        printf("Element %d is found at location %d",item,i+1);
        break;
        }
    }
    if(i==n)
    {
        printf("Element %d not found",item);
    }
}